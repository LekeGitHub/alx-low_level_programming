#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: A pointer an int will changed/updated
 *
 * Return: void that means our answer is correct
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u]) != '\0')
	{
		u++;
	}
	return (u);
}
