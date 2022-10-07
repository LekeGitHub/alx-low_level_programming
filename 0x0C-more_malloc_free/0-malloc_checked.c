#include "main.h"
/**
 * malloc_checked - Function to create memory allocation
 * @b: Size to create
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
