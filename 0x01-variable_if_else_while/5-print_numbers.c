#include <stdio.h>
/**
*main - prints the numerals 0 to 9
*
*Return: always(0) for success
*/
int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 0;

	for (; n < 10; n++)
	{
		printf("%d", num[n]);
	}

	printf("\n");
	return (0);
}
