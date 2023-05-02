#include "main.h"

/**
*puts2 - prints every other character of a string
*
*@str: string to use
*
*Retrun: usually zero
*/

void puts2(char *str)
{
	int ind = 0;

	while (ind >= 0)
	{
		if (str[ind] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (ind % 2 == 0)
			_putchar(str[ind]);
		ind++;
	}
}
