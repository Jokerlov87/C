#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000  // 定义预处理宏，表示每一行文本的最大长度
#define MAX_SUBJECTS 3        // 定义预处理宏，表示每个学生的科目数量

// 定义结构体类型 Student，包含学生名字、分数和总分属性
typedef struct
{
    char name[50];           
    int scores[MAX_SUBJECTS];
    int totalScore;
} Student;

// 计算每个学生的总分
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

// 将学生信息写入到CSV文件中
void writeToCSV(Student* students, int numStudents, const char* filename, const char* subjectNames[])
{  
    FILE* file = fopen(filename, "w");   // 以写入模式打开CSV文件 
    if (file == NULL)
	{
        printf("Failed to open file for writing.\n");
        return;
    }

    // 写入表头，包括学生姓名和科目名称
    fprintf(file, "Name");
    for (int j = 0; j < MAX_SUBJECTS; j++)
	{
        fprintf(file, ",%s", subjectNames[j]);
    }
    fprintf(file, ",Total\n");

    // 写入每一个学生的信息
    for (int i = 0; i < numStudents; i++)
	{
        fprintf(file, "%s", students[i].name);
        for (int j = 0; j < MAX_SUBJECTS; j++)
		{
            fprintf(file, ",%d", students[i].scores[j]);
        }
        fprintf(file, ",%d\n", students[i].totalScore);
    }

    fclose(file);  // 关闭文件

    printf("Total scores have been written to the CSV file.\n");
}

int main()
{
    const char* filename = "class_scores.csv";  // 定义存储学生信息的CSV文件名
    FILE* file = fopen(filename, "r");  // 以读取模式打开CSV文件
    if (file == NULL)
	{
        printf("Failed to open the CSV file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];  // 定义字符数组，存储读取到的每一行文本
    Student students[MAX_LINE_LENGTH];  // 定义Student数组，存储学生信息
    int numStudents = 0;  // 学生总数初始化为零

    // 定义科目名称数组
    const char* subjectNames[MAX_SUBJECTS] = {"Math", "English", "Science"};
    fgets(line, sizeof(line), file);//跳过表头 

    // 逐行读取CSV文件
    while (fgets(line, sizeof(line), file) != NULL)
	{
        char* token = strtok(line, ",");  // 使用逗号将一行文本分割为若干个单元格
        strcpy(students[numStudents].name, token);  // 将第一个单元格中的学生名字复制到结构体中

		// 遍历每个学生的科目成绩
        for (int i = 0; i < MAX_SUBJECTS; i++)
		{  
            token = strtok(NULL, ",");  // 获取下一个单元格的内容
            students[numStudents].scores[i] = atoi(token);  // 将单元格内容转换为数字，存储到结构体中
        }

        numStudents++;  // 学生总数加一
    }

    fclose(file);  // 关闭文件

    calculateTotalScore(students, numStudents);  // 计算每个学生的总分
    writeToCSV(students, numStudents, "output.csv", subjectNames);  // 调用writeToCSV函数将学生信息写入到 CSV 文件中

    return 0;
}
