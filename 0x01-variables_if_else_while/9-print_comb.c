#include <stdio.h>

/**
*main - prints all possible combinations of single-digit numbers
*
*Return: void
*/

int main(void)
{
	int nmb;

	for (nmb = 0; nmb < 10; nmb++)
	{
		putchar(nmb + '0');
		if (nmb != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
