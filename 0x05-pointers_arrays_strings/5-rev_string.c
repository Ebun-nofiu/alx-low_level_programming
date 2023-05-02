#include "main.h"

/**
*rev_string - reverses a string
*
*@s: the string to be reversed
*
*Return: usually zero
*/

void rev_string(char *s)
{
	int ind = 0, e, f;
	char *str, temp;

	while (ind >= 0)
	{
		if (s[ind] == '\0')
			break;
		ind++;
	}
	str = s;

	for (e = 0; e < (ind - 1); e++)
	{
		for (f = e + 1; f > 0; f--)
		{
			temp = *(str + f);
			*(str + f) = *(str + (f - 1));
			*(str + (f - 1)) = temp;
		}
	}
}
