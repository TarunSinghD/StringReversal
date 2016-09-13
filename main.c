/*
 * Program Description	: This program accepts a string input from user and reverses the string. Program also displays the reversed string or appropriate error message.
 * Author		: Tarun
 * Date			: September 3 2016
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 50

/*
 * Description	: This function accepts a string and its length as input and reverses the string if it is a valis string, otherwise it returns a non zero value
 * Input	: Character String and its length
 * Output	: Reversed string(return 0) if a valid input is provided
 */
char reverse(char *str, int length)
{
	int i = 0;
	char tmp[length];

	/* Check if the string is empty */
	if (*str == '\0')
	{
		return 1;
	}

	/* Check if the length is a positive non zero value */
	if (length <= 0)
	{
		return 1;
	}

	if (length > MAX_LENGTH)
	{
		return 1;
	}

	for (i = 0; i < length; i++)
	{
		*(tmp + i) = *(str + length - 1 - i);
	}

	for (i = 0; i < length; i++)
	{
		*(str + i) = *(tmp + i);
	}

	return 0;
}

int main()
{
	system("clear");

	char ch, str[MAX_LENGTH], option;
	int length, i = 0, check;

	do
	{
		i = 0;

		printf("Enter any string:(press ctrl + d to terminate input)\n");

		ch = getchar();
		while (ch != EOF)
		{
			if (i < MAX_LENGTH)
			{
				*(str + i) = ch;
			}
			i++;
			
			ch = getchar();
		}

		str[i] = '\0';

		length = i;

		check = reverse(str, length);

		if (check)
		{
			printf("\nReverse function failed!!\n");
			goto prompt;
		}

		printf("\nReverse of the string is:\n");
		for (i = 0; i < length; i++)
			printf("%c", *(str + i));

		printf("\n");

		prompt:
		printf("Do you want to continue?(y/n)\n");
		scanf(" %c", &option);

	} while((option == 'y') || (option == 'Y'));

	return 0;
}

