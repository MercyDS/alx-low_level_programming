#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev -  returns the length of a string
*
*@s: pointer to char
*Return: (void)
*/
void print_rev(char *s)
{
	int size = strlen(s);

	while (size > 0)
	{
		_putchar(s[size - 1]);
		size--;
	}
	_putchar('\n');
}
