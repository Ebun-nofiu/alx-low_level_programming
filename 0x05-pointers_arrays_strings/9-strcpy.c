#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to
*
* @dest: the destination
*
* @src: the source
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int f = 0;

	while (f >= 0)
	{
		*(dest + f) = *(src + f);
		if (*(src + f) == '\0')
			break;
		f++;
	}
	return (dest);
}
