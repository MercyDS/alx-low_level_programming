#include "main.h"
#include <string.h>

/**
* string_toupper - coverts lower caseletter to
* uppercase
*
* @b: pointer to char, string to be converted
* Return: b
*/
char *string_toupper(char *b)
{
	int i;

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
		{
			b[i] = b[i] - 32;
		}
	}
	return (b);
}
