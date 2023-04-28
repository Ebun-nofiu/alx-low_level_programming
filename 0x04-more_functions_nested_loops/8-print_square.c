#include "main.h"

/**
 * print_square - prints squraes with hashtags
 *
 * @size: size of the square
 *
 * Return: no return
 */

void print_square(int size)
{
	int p, r;

	for (p = 0; p < size; p++)
	{
		for (r = 0; r < size; r++)
		{
			_putchar(35);
		}
		if (p != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
