#include <stdio.h>

/**
*main - prints the alphabet in lowercase
*
*Return: void
*/

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		if (l != 'q' && l != 'e')
			putchar(l);
	putchar('\n');
	return (0);
}
