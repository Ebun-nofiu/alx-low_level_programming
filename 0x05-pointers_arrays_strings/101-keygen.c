#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - the main function
*
* Return: usually zero
*/

int main(void)
{
	int f = 0, g = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (g < 2772)
	{
		f = rand() % 128;
		if ((f + g) > 2772)
			break;
		g = g + f;
		printf("%c", f);
	}
	printf("%c\n", (2772 - g));
	return (0);
}
