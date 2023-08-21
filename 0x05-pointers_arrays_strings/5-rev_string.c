#include <stdio.h>
#include "main.h"

/**
* rev_string - reverse a string
*
* @s: pointer to char
*Return: (void)
*/
void rev_string(char *s)
{
	if (s == NULL)
		return;

	int length;
	char *start = s;
	char *end = s;

	length = 0;

	while (*end != '\0')
	{
		end++;
		length++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
