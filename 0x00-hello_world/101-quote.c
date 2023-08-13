#include <stdio.h>
#include <unistd.h>
/**
 *main - prints a string and a newline to to standard error
 *
 *Return: always(0) successful
 */
int main(void)
{
	fputs("\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	     stdout);
	return (0);
}
