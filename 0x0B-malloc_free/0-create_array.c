#include "main.h"
/**
 * create_array - functon creates an of chars
 * @size: an array size variable
 * @c: initialization character variable
 * Return: NULL if it fails or
 * Pointer to array.,
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (a);
}
