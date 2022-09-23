/**
 * _strncat - a function that concatinaes two strings.
 * 
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most nnumber of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c -0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[c + i] = src[i];

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
 	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
			dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
