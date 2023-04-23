#include <stdio.h>

/**
*main - prints the alphabet in lowercase backwards
*
*Return: void
*/

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
