#include <stdio.h>
/**
 *main - prints the base 16 number
 *
 *Return: always(0) success
 */

int main(void)
{
	char smal_Ltr = 97;
	int num = 48;
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		putchar(num);
		num++;
	}

	for (cnt = 0; cnt < 6; cnt++)
	{
		putchar(smal_Ltr);
		smal_Ltr++;
	}

	putchar('\n');
	return (0);
}
