#include "main.h"

/**
* print_number - displays an integer
*
* @n: parameter
*
* Return: usually zero
*/
void print_number(int n)
{
	unsigned int s, t, count;

	if (n < 0)
	{
		_putchar(45);
		s = n * -1;
	}
	else
	{
		s = n;
	}

	t = s;
	count = 1;

	while (t > 9)
	{
		t /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((s / count) % 10) + 48);
	}
}
