#include <stdio.h>
#include "main.h"
/**
*swap_int - swaps the values of a and b
*
*@a: first integer
*@b: second integer
*Return: (void)
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
