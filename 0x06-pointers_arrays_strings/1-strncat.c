#include "main"

/**
* _strncat - copies string 2 to the first n spaces of string 1
*
* @dest: first string
* @src: second string
* @n: n spaces string 2 is allowed to copy
* Return: (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
