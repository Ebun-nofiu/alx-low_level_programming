#include "main.h"

/**
*print_numbers - prints integers from 0-9
*
*Return: usually 0
*/

void print_numbers(void)
{
	int ind;

	for (ind = 0; ind <= 9; ind++)
	{
		_putchar (ind + '0');
	}
	_putchar ('\n');
}
