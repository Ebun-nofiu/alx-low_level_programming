#include "main.h"

/**
*_puts - prints a string
*
*@str: the string to be printed
*
*Return: usually zero
*/

void _puts(char *str)
{
	int f;

	for (f = 0; str[f] != '\0'; f++)
	{
		_putchar (str[f]);
	}
	_putchar ('\n');
}
