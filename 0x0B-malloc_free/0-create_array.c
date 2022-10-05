#include "main.h"
/**
 * create_array - creates an array of chars and initializes it with
 * a specific char.
 * @size: an array size variable
 * @c: initialization character variable
 * Return: NULL if it fails or
 * Pointer to array.,
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
