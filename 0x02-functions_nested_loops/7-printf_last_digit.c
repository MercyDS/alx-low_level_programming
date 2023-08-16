#include <stdio.h>

/**
*print_last_digit - prints the last digit of a number
*
*@n: integer (argument)
*Return: l the last digit
*/

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = -l;
	}

	putchar(l + '0');
	return (l);
	}
}
