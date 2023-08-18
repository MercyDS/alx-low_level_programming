#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - prints number 0 to 9 with newline
*excluding 2 and 4
*
*Return: (0) success
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
