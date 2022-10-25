#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all argument 
 * @ac: argument count
 * @av: pointer to array
 * Return: NULL if
 * NULL on fail
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k =
