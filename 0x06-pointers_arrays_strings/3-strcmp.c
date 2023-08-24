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

	for (i = 0; i < strlen(s1) && s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return ((int)s1[i] - (int)s2[i]);
		}
	}
	return (0);
}
