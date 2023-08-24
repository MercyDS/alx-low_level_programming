#include <string.h>

/**
* _strcmp - works like the standard strcmp function
*
* @s1: first string
* @s2: second string
* Return: (0) if s1 and s2 are same or the
* difference if not
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
