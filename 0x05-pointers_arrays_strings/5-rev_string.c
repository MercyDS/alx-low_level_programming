#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
