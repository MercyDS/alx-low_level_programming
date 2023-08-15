#include <stdio.h>
/**
 *main - prints the alphabets in small letters then in capital letters
 *
 *Return: always(0) success
 */

int main(void)
{
	char smal_Ltr = 97;
	char Cap_Ltr = 65;
	int cnt;

	for (cnt = 0; cnt < 26; cnt++)
	{
	putchar(smal_Ltr);
	smal_Ltr++;
	}

	for (cnt = 0; cnt < 26; cnt++)
	{
	putchar(Cap_Ltr);
	Cap_Ltr++;
	}
	putchar('\n');
	return (0);
}
