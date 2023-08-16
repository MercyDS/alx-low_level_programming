#include <stdio.h>

/**
 * print_sign - checks if n is negative, positive, or zero and prints -, +, and 0 respectively
 *
 * @n: an integer that is checked by the print_sign function
 *
 * Return: (1) if n is positive, (-1) if negative, or (0) if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		 return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
