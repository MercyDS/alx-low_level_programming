#include <stdio.h>

/**
 *print_alphabet - returns void and prints the lower case letters or the
 *alphabet
 */
void print_alphabet(void)
{
	char sLtr = 97;
	int cnt;

	for (cnt = 0; cnt < 26; cnt++)
	{
		putchar(sLtr);
		sLtr++;
	}
	putchar('\n');

}
