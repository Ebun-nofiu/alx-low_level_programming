#include "main.h"

/**
*puts_half - prints half of a string
*
*@str: the string
*
*Return: usually zero
*/

void puts_half(char *str)
{
	int ind = 0, f;

	while (ind >= 0)
	{
		if (str[ind] == '\0')
			break;
		ind++;
	}

	if (ind % 2 == 1)
		f = ind / 2;
	else
		f = (ind - 1) / 2;

	for (f++; f < ind; f++)
		_putchar(str[f]);
	_putchar('\n');
}
