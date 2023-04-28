#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 *
 * @n: number of times to be printed
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int p, r;

	for (p = 0; p < n; p++)
	{
		for (r = 0; r < p; r++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (p < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
