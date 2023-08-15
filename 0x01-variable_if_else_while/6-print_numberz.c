#include <stdio.h>
/**
*main - prints the numerals 0 to 9 using the stdio.h library putchar
*
*Return: always(0) for success
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');
	return (0);
}
