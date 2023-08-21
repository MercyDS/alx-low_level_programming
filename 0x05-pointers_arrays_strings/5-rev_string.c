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
	char store[strlen(s) + 1];

	while (n < strlen(s))
	{
		store[n] = same[(strlen(s) - 1) - n];
		n++;
	}
	store[n] = '\0';
	strcpy(s, store);
}
