#include "main.h"

/**
*swap_int - function to swap 2 integers
*
*@a: first integer
*
*@b: second integer
*
*Return: usually zero
*/

void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
