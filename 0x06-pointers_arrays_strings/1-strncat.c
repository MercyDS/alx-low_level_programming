#include "main.h"
/**
* _strncat - copy the string 2 to string 1
*
* @dest: first string (pointer to char)
* @src: second string (pointer to char)
* @n: nummber of string to be copied
* Return: (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[i];
	return (dest);
}
