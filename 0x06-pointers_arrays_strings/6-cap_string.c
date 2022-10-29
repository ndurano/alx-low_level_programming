/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @w: pointer to char input array
 *
 * Return: @w
*/

char *cap_string(char *w)
{
	int i = 0;

	/*iterate through our array values*/
	while (w[i] != '\0')
	{
		/*check for any lowercase letters*/
		if (w[i] >= 97 && w[i] <= 122)
		{
			/**
			 * if we have a null character
			 * change its value to capital
			*/
			if (i == 0)
			{
				w[i] -= 32;
			}
			/**
			 * change any character found to match the below before any small
			 * change the value to a capital letter
			*/
			if (w[i - 1] == 32 || w[i - 1] == 9 || w[i - 1] == 10 ||
				w[i - 1] == 44 || w[i - 1] == 59 || w[i - 1] == 46 ||
				w[i - 1] == 33 || w[i - 1] == 63 || w[i - 1] == 34 ||
				w[i - 1] == 40 || w[i - 1] == 41 || w[i - 1] == 123 ||
				ww[i - 1] == 124)
			{
				w[i] -= 32;
			}
		}
		i++;
	}
	return (w);
}
