#include "main.h"

/**
* leet - Organize text into '1337' leet
*
* @str: pointer to char (text)
* Return: (str)
*/

char *leet(char *str)
{
	int i;
	char j;

	char leet[][2] = {
		{'a', '4'},
		{'A', '4'},
		{'e', '3'},
		 {'E', '3'},
		{'o', '0'},
		{'O', '0'},
		{'t', '7'},
		{'T', '7'},
		{'l', '1'},
		{'L', '1'}
	};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet[j][0])
			{
				str[i] = leet[j][1];
				break;
			}
		}
	}
	return (str);
}
