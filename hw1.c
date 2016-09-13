#include "hw1.h"

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

