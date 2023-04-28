#include "main.h"

/**
* print_triangle - prints a triangle
*
* @size: numbers of triangle lines
*
* Return: usually zero
*/

void print_triangle(int size)
{
	int p, r;

	for (p = 0; p < size; p++)
	{
		for (r = 1; r < (size - p); r++)
			_putchar(' ');
		for (r--; r < size; r++)
			_putchar(35);
		if (p < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
