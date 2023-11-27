#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000  // ����Ԥ����꣬��ʾÿһ���ı�����󳤶�
#define MAX_SUBJECTS 3        // ����Ԥ����꣬��ʾÿ��ѧ���Ŀ�Ŀ����

// ����ṹ������ Student������ѧ�����֡��������ܷ�����
typedef struct
{
    char name[50];           
    int scores[MAX_SUBJECTS];
    int totalScore;
} Student;

// ����ÿ��ѧ�����ܷ�
void calculateTotalScore(Student* students, int numStudents)
{
    for (int i = 0; i < numStudents; i++)
	{
        int total = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++)
		{
            total += students[i].scores[j];
        }
        students[i].totalScore = total;
    }
}

// ��ѧ����Ϣд�뵽CSV�ļ���
void writeToCSV(Student* students, int numStudents, const char* filename, const char* subjectNames[])
{  
    FILE* file = fopen(filename, "w");   // ��д��ģʽ��CSV�ļ� 
    if (file == NULL)
	{
        printf("Failed to open file for writing.\n");
        return;
    }

    // д���ͷ������ѧ�������Ϳ�Ŀ����
    fprintf(file, "Name");
    for (int j = 0; j < MAX_SUBJECTS; j++)
	{
        fprintf(file, ",%s", subjectNames[j]);
    }
    fprintf(file, ",Total\n");

    // д��ÿһ��ѧ������Ϣ
    for (int i = 0; i < numStudents; i++)
	{
        fprintf(file, "%s", students[i].name);
        for (int j = 0; j < MAX_SUBJECTS; j++)
		{
            fprintf(file, ",%d", students[i].scores[j]);
        }
        fprintf(file, ",%d\n", students[i].totalScore);
    }

    fclose(file);  // �ر��ļ�

    printf("Total scores have been written to the CSV file.\n");
}

int main()
{
    const char* filename = "class_scores.csv";  // ����洢ѧ����Ϣ��CSV�ļ���
    FILE* file = fopen(filename, "r");  // �Զ�ȡģʽ��CSV�ļ�
    if (file == NULL)
	{
        printf("Failed to open the CSV file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];  // �����ַ����飬�洢��ȡ����ÿһ���ı�
    Student students[MAX_LINE_LENGTH];  // ����Student���飬�洢ѧ����Ϣ
    int numStudents = 0;  // ѧ��������ʼ��Ϊ��

    // �����Ŀ��������
    const char* subjectNames[MAX_SUBJECTS] = {"Math", "English", "Science"};
    fgets(line, sizeof(line), file);//������ͷ 

    // ���ж�ȡCSV�ļ�
    while (fgets(line, sizeof(line), file) != NULL)
	{
        char* token = strtok(line, ",");  // ʹ�ö��Ž�һ���ı��ָ�Ϊ���ɸ���Ԫ��
        strcpy(students[numStudents].name, token);  // ����һ����Ԫ���е�ѧ�����ָ��Ƶ��ṹ����

		// ����ÿ��ѧ���Ŀ�Ŀ�ɼ�
        for (int i = 0; i < MAX_SUBJECTS; i++)
		{  
            token = strtok(NULL, ",");  // ��ȡ��һ����Ԫ�������
            students[numStudents].scores[i] = atoi(token);  // ����Ԫ������ת��Ϊ���֣��洢���ṹ����
        }

        numStudents++;  // ѧ��������һ
    }

    fclose(file);  // �ر��ļ�

    calculateTotalScore(students, numStudents);  // ����ÿ��ѧ�����ܷ�
    writeToCSV(students, numStudents, "output.csv", subjectNames);  // ����writeToCSV������ѧ����Ϣд�뵽 CSV �ļ���

    return 0;
}
