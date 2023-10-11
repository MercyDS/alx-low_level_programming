#include <stdio.h>
/**
 *_islower - library to main function
 *
 *Description: checks if for lower case and return 0 if upper case
 *
 *@c: int variable(argument) a character
 *Return: always(0) for success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
