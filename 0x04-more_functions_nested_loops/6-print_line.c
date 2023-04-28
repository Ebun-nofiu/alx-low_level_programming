#include "main.h"

/**
*print_line - prints a straight line
*
*@n: number of times to print _
*
*Return: usually zero
*/

void print_line(int n)
{
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
