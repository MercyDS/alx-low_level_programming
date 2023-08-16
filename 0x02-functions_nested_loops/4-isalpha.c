#include <stdio.h>

/**
*_isalpha - checks c and return 1 (if c is lowercase
*or higher case aphabet, or 0 if not
*
*@c: an integer that is checked by the _isalphabet function
*Return: (1) if c is a letter, lowercase, or uppercase
*else it returns (0)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
