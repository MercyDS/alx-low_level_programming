#include "main.h"

/**
* cap_string - Organize text into readable texts
*
* @b: pointer to char (text to be organized)
* Return: (b)
*/

char *cap_string(char *b)
{
	int i;
	int c = 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (c && b[i] >= 'a' && b[i] <= 'z')
		{
			b[i] = b[i] - 32;
		}

		c = 0;

		if (b[i] == ' ' || b[i] == '\t' || b[i] == '\n' ||
		b[i] == ',' || b[i] == ';' || b[i] == '.' ||
		b[i] == '!' || b[i] == '?' || b[i] == '"' ||
		b[i] == '(' || b[i] == ')' || b[i] == '{' ||
		b[i] == '}')
		{
			c = 1;
		}
	}

	return (b);
}
