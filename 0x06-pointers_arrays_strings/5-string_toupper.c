/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @l : pointer to input char
 *
 * Return: @l
*/

char *string_toupper(char *l)
{
	int j = 0;

	while (l[j] != '\0')
	{
		if (l[j] >= 97 && l[j] <= 122)
			l[j] = l[j] - 32;
		j++;
	}
	return (l);
}
