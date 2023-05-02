#include "main.h"

/**
*print_rev - prints a string in reverse
*
*@s: the string to be printed
*
*Return: usually zero
*/

void print_rev(char *s)
{
	int ind = 0;

	while (ind >= 0)
	{
		if (s[ind] == '\0')
			break;
		ind++;
	}

	for (ind--; ind >= 0; ind--)
		_putchar(s[ind]);
	_putchar('\n');
}
