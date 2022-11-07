/**
 * _strcpy - copies a string from one pointer to another
 *
 * @src: input parameter for the source of the sring
 * @dest: destination of string
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int m, n = 0;

	for (m = 0; src[m] != '\0'; ++m)
	{
		dest[n] = src[m];
		++n;
	}
	dest[n] = '\0';

	return (dest);
}
