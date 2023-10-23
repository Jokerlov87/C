#include <stdio.h>

int countWords(char *str) 
{
    int count = 0;
    int isWord = 0;

    while (*str != '\0') 
	{
        if (*str == ' ')
		{
            isWord = 0;
        }
		else if (isWord == 0)
		{
            isWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "I have a dream.";
    int wordCount = countWords(str);
    printf("Word count: %d\n", wordCount);

    return 0;
}
