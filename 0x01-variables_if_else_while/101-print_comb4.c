#include <stdio.h>

/**
*main - this is the main function
*
*Return: replies the main function
*/

int main(void)
{
	int p;
	int q;
	int r;

	for (p = 0 ; p < 10 ; p++)
	{
		for (q = 1 ; q < 10 ; q++)
		{
			for (r = 2 ; r < 10 ; r++)
			{
				if (p < q && q < r)
				{
					putchar(p + '0');
					putchar(q + '0');
					putchar(r + '0');
					if (p + q + r != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
