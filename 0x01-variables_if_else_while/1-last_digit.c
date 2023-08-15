#include <stdio.h>
/**
 *main - choose a random number and print it last digit
 *
 *Return: always(0) for success
 */
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() % (RAND_MAX + 1) - RAND_MAX / 2;

	int size = sizeof(n) / sizeof(int);
	int lasDigt = n % 10;

	printf("The Last digit of %d is %d and is ", n, lasDigt);

	if (lasDigt < 6 && lasDigt != 0)
		printf("less than 6 and not 0\n");
	else if (lasDigt == 0)
		printf("0\n");
	else
	{
		printf("greater than 5");
	}

	return (0);
}
