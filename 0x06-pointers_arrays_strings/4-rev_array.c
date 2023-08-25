#include "main.h"

/**
* reverse_array - reverse a string
*
* @a: first string (pointer to char)
* @n: second string (times n is to be printed)
* Return: (void)
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
