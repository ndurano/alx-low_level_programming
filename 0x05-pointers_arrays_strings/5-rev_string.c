/**
 * rev_string - reverses a string
 *
 * @s: input parameter
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int m, n;
	char ch;


	for (m = 0; s[m] != '\0'; ++m)
		;


	for (n = 0; n < m / 2; ++n)
	{
		ch = s[n];
		s[n] = s[m - m - n]; 
		s[m - m - n] = ch;
	}

}
