#include "main.h"
/**
 * create_array - functon creates an of chars
 * @size: an array size variable
 * @c: initialization character variable
 * Return: NULL if size = 0,
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

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
