#include "main.h"
/**
*jack_bauer - list the time 00:00 to 23:59
*
*Return: void
*/

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w <= 2; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 5; z++)
					{
						if (w >= 2 && x >= 4)
							break;
						_putchar(w + 48);
						_putchar(x + 48);
						_putchar(58);
						_putchar(y + 48);
						_putchar(z + 48);
						_putchar('\n');
				}
			}
		}
	}
}
