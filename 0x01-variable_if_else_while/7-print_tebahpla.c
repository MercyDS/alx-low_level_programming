#include <stdio.h>
/**
 *main - print the alphabet a to z
 *
 *Return: always(0) success
 */

int main(void)
{
	char sLtr = 123;
	int cnt;

	for (cnt = 0; cnt < 26; cnt++)
	{
		putchar(sLtr);
		sLtr--;
	}
	putchar('\n');
	return (0);
}
