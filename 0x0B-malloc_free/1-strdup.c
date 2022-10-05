#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 * @str: pointer to string being duplicated.
 *
 * Return: NULL if str is NULL.
 * pointer to duplicated string on success.
 * NULL if memory was insufficient.
 */
char *_strdup(char *str);
{
	char *nstr;
	unsigned int len, i;

	/*check if str is null */

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/* check if mallc was successful */
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
