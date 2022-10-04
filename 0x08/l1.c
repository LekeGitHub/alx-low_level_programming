#include "main.h"
#include <stdio.h>

int factorial(int n)
{
	int res, i;

	res = 1;
	i = 2;

	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}
