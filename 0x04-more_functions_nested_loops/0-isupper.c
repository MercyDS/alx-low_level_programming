#include <stdio.h>
#include "main.h"

/**
 *_isupper - check for uppercase
 *
 *Return: (1) for uppercase otherwise (0)
 */

int _isupper(int c)
{
	c;

	if (c >= 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
