#include "main.h"
#include <string.h>

/**
* _strcmp - compare string 1 and 2
*
* @s1: first sstring (pointer to char)
* @s2: second string (pointer to char)
* Return: (0) or (difference)
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
