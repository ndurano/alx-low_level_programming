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
    unsigned int j;

    for (i = 0; j < n; j++)
        dest[j] = src[j];
    return (dest);
}
