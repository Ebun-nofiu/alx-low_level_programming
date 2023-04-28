#include <stdio.h>

/**
*main - the main function
*
*Return: usully zero
*/

int main(void)
{
	int q;

	q = 1;
	printf("%d", q);
	for (q = 2; q <= 100; q++)
	{
		if ((q % 3 == 0) && (q % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (q % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (q % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", q);
		}
	}
	printf("\n");
	return (0);
}
