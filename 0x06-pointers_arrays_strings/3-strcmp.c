/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 
 * @s2: string 2
 *
 * Return: 0 if s1 and s2 are equal
 *
*/

int _strcmp(char *s1, char *s2)
{
	int j = 0, k;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		
		if (s1[j] != s2[j])
		{
			k = s1[j] - s2[j];
			break;
		}
		else
		{
			k = s1[j] - s2[j];
		}
		j++;
	}

	return (r);
}
