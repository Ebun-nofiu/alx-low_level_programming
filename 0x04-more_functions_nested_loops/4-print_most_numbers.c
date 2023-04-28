#include "main.h"

/**
*print_most_numbers - prints integers from 0-9
*
*Return: usually 0
*/

void print_most_numbers(void)
{
	int ind;

	for (ind = 0; ind <= 9; ind++)
		if (ind != 2 && ind != 4)
	{
		_putchar (ind + '0');
	}
	_putchar ('\n');
}
