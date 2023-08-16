#include <stdio.h>

/**
 *print_alphabet_x10 - prints the lowercase letters of the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char sLtr; /*small leter*/
	int cnt; /*count*/
	int rec; /*recursive*/

	for (rec = 0; rec < 10; rec++)
	{
		sLtr = 97;
		for (cnt = 0; cnt < 26; cnt++)
		{
			putchar(sLtr);
			sLtr++;
		}
		putchar('\n');
	}
}
