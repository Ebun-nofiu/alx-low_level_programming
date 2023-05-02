#include "main.h"

/**
*_strlen - function to show length of a string
*
*@s: string to be counted
*
*Return: returns the length of a string
*/

int _strlen(char *s)
{
	int e;
	int f = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		f++;
	}
	return (f);
}
