#include "main.h"

/**
* _strncpy - fill the first n spaces with string 2
*
* @dest: first string
* @src: second string
* @n: the number of spaces of dest src is copied to
* Return: (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
