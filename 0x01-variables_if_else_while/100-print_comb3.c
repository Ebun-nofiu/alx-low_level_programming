#include <stdio.h>

/**
*main - prints all possible combinations of single-digit numbers
*
*Return: void
*/

int main(void)
{
	int x;
	int y;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 1 ; y < 10 ; y++)
		{
			if (x < y && x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
