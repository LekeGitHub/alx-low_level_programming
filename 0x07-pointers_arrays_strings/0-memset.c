#include "main.h"
/*
 * main - memset funtion
 *
 * @s - functions that fills memory with byte
 *
 * Return : s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
