#include <string.h>
#include "main.h"

/**
* _strcmp - copy string 2 to string 1
*
* @s1: First string
* @s2: second string
* Return: 0 (same) or an integer (different)
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] != s2[i])
		{
			return ((int)(s1[i] - s2[i]));
		}
	}

	return (0);
}
