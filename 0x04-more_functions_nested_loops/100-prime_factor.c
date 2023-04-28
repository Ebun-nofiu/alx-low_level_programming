#include <stdio.h>

/**
* main - largest prime factor
*
* Return: usually 0
*/

int main(void)
{
	long int p, r;

	p = 612852475143;
	for (r = 2; r <= p; r++)
	{
		if (p % r == 0)
		{
			p /= r;
			r--;
		}
	}
	printf("%ld\n", r);
	return (0);
}
