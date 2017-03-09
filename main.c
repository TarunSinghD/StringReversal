/*
 * Program Description	: This program accepts a string input from user and reverses the string. Program also displays the reversed string or appropriate error message.
 * Author		: Tarun
 * Date			: September 3 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include "hw1.h"

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
        if (i >= MAX_LENGTH) {
            length = MAX_LENGTH - 1;
        } else {
            length = i;
        }
        str[length] = '\0';

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

