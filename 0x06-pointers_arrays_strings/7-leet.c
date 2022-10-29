/**
 * leet - a function that encodes a string into 1337
 *
 * @str: string input
 *
 * Return: @str
*/

char *leet(char *str)
{
	int j, k = 0;
	int smallLetter[] = {97, 101, 111, 116, 108};
	int upperLetter[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array str*/
	while (str[k] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[k] == smallLetter[j] || str[k] == upperLetter[j])
			{
				str[k] = n[j];
				break;
			}
		}
		k++;
	}
	return (str);
}
