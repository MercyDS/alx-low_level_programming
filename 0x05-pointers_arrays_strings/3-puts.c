#include <stdio.h>
#include "main.h"

/**
* _puts -  returns the length of a string
*
*@str: pointer to char
*Return: (void)
*/
void _puts(char *str)
{
	int size, n = 0;

	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
