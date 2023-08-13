#include <stdio.h>
/**
 *main - print the size of variables in c
 *
 *Return: always(0) successful
 */
int main(void)
{
	printf("size of a char: %d byte(s)", sizeof(char));
	printf("\nsize of an int: %d byte(s)", sizeof(int));
	printf("\nsize of a long int: %d byte(s)", sizeof(long int));
	printf("\nsize of a long long int: %d byte(s)", sizeof(long long int));
	printf("\nsize of a float: %d byte(s)", sizeof(float));

	return (0);
}
