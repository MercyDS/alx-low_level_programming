#include <stdio.h>

/**
*_abs - functions like the library abs
*
*@i: integral (argument)
*Return: either (i) or (i * -1)
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
