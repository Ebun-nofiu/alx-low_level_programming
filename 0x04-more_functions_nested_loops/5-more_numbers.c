#include "main.h"

/**
*more_numbers - prints integers from 0-14
*
*Return: usually 0
*/

void more_numbers(void)
{
	int p;
	int r;

	for (p = 0; p < 10; p++)
	{
		for (r = 0; r < 15; r++)
		{
			if (r >= 10)
				_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}

}
