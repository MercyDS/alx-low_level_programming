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
	int length = 0;
	char *start;

	if (s == NULL)
		return;

	while (*end != '\0')
	{
		char *end = s;
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
