#include "main.h"
#include <stdio.h>
/**
* puts2 - print only even numbers
*
* @str: pointer to char
* Return: nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
