/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area that we are copying to
 * @src: memory area that we are copying from
 * @n: n bytes from the memory area @src
 *
 * Return:  0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
