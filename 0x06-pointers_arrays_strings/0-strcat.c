/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to the resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	/*find the size of dest array*/
	while (dest[m])
		m++;

	/* iterate through each src array value without the null byte*/
	for (n = 0; src[n] ; n++)
		/*append src[n] to dest[m] while overwritting the null byte in dest*/
		dest[m++] = src[n];

	return (dest);
}
