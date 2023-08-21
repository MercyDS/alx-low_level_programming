#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	i = len / 2;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
