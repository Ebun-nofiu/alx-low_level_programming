#include <stdio.h>

/**
*main - prints the alphabet in lowercase
*
*Return: void
*/

int main(void)
{
	int nmb;

	for (nmb = 0; nmb <= 9; nmb++)
		putchar(nmb + '0');
	putchar('\n');
	return (0);
}
