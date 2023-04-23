#include <stdio.h>

/**
*main - prints numbers of base 16
*
*Return: void
*/

int main(void)
{
	int nmb;
	char nmb2;

	for (nmb = 0; nmb < 10; nmb++)
		putchar(nmb + '0');
	for (nmb2 = 'a'; nmb2 <= 'f'; nmb2++)
		putchar(nmb2);
	putchar('\n');
	return (0);
}
