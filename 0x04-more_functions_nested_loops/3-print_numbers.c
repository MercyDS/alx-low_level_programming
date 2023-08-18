#include <stdio.h>
#include "main.h"

/**
*print_numbers - prints number 0 to 9 with newline
*
*Return: (0) success
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)

		_putchar('0' + i);
	_putchar('\n');
}
