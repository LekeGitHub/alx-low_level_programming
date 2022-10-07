#include "main.h"
/**
 * malloc_checked - Function to create memory allocation
 * @b: Size to create
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
