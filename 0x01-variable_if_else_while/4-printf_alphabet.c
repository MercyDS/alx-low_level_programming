#include <stdio.h>
/**
 *main - prints the lower case letters of the alphabet, omitting e and q
 *
 *Return: always(0) success
 */
int main(void)
{
	char smal_Ltr = 97;
	int cnt;

	for (cnt = 0; cnt < 26; cnt++)
	{
		if (!(smal_Ltr == 101) && !(smal_Ltr == 113))
			putchar(smal_Ltr);
		else
		{
			/*Do nothing*/
		}

		smal_Ltr++;
	}

	putchar('\n');
	return (0);
}
