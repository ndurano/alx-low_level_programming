/**
 * _strncat - a function that concatenates two strings.
 *
 * @src: pointer to source input
 * @dest: pointer to destination input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int m, j;

	m = 0;

	/*find size of dest array*/
	while (dest[m])
		m++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[m + j] = src[j];
	/*null terminate dest*/
	dest[m + j] = '\0';

	return (dest);
}
