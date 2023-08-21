#include <stdio.h>
#include "main.h"

/**
* _strlen -  returns the length of a string
*
*@s: pointer to char
*Return: (size)
*/
int _strlen(char *s)
{
	int size = 0;

	while (s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}
