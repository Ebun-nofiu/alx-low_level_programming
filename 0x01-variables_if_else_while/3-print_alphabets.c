#include <stdio.h>

/**
*main - prints the alphabet in lowercase
*
*Return: void
*/

int main(void)
{
	char l;
	char caps_l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (caps_l = 'A'; caps_l <= 'Z'; caps_l++)
		putchar(caps_l);
	putchar('\n');
	return (0);
}
