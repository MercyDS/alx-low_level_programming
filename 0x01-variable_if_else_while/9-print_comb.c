#include <stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers
 *with commas and spaces
 *
 *Return: always(0) success
 */

int main(void)
{
	int num = 48;
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		putchar(num);
		num++;

		if (!(cnt == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
