#include "main.h"

/**
* _strncpy - copy string 2 to string 1
*
* @dest: first string (pointer to char)
* @src: second string (pointer to char)
* @n: number of spaces of string 2 to copy
* Return: (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}

	for (; s < n; s++)
	{
		dest[s] = '\0';
	}
	return (dest);
}
