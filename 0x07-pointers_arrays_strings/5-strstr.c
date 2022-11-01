/**
 * _strstr - a function that finds the first occurrence of substring @needle
 *       in the string haystack. The terminating '\0' characters not compared.
 *
 * @haystack: input string to search for matching
 *            substrings. The main C string to be scanned
 * @needle: the small string to be searched with-in haystack stringr
 *
 * Return: returns a pointer to the first occurrence in haystack
 *      of any of the entire sequence of characters specified in needle,
 *      or a null pointer if the sequence is not present in haystack.
*/

char *_strstr(char *haystack, char *needle)
{
	/**
	 * we initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	*/
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
