#include <stdio.h>

/**
*more_numbers - prints 1 to 14 ten times
*
*Return: (void)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			_putchar('0' + j);
		for (j = 0; j < 5; j++)
		{
			putchar('1');
			putchar('0' + j);
		}
		_putchar('\n');
	}
}
