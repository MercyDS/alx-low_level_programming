#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string -  returns the length of a string
*
* @s: pointer to char
* Return: (void)
*/
void rev_string(char *s)
{
	int n = 0;
	char *same = s;
	char str[strlen(s) + 1];

	while (n < (int)strlen(s))
	{
		str[n] = same[(strlen(s) - 1) - n];
		n++;
	}
	str[n] = '\0';
	strcpy(s, store);
}
