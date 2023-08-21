#include <stdio.h>

/**
* print_array - print intergers with comma and spaces
*
* @a: pointer to int (the integers to print)
* @n: the numbers of element in the array
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
