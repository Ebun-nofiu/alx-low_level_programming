#include "main.h"

/**
* _atoi - converts a string to an integer
*
* @s: string
*
* Return: usually zero
*/

int _atoi(char *s)
{
	unsigned int ind = 0, sz = 0, fm = 0, bn = 1, m = 1, i;

	while (*(s + ind) != '\0')
	{
		if (sz > 0 && (*(s + ind) < '0' || *(s + ind) > '9'))
			break;

		if (*(s + ind) == '-')
			bn *= -1;

		if ((*(s + ind) >= '0') && (*(s + ind) <= '9'))
		{
			if (sz > 0)
				m *= 10;
			sz++;
		}
		ind++;
	}

	for (i = ind - sz; i < ind; i++)
	{
		fm = fm + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (fm * bn);
}
