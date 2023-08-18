#include <stdio.h>
/**
*_isdigit - checks for digits
*
*Return: (0) successful
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
