/**
 * _strpbrk - a functionfinds the first character in the string s
 *       that matches any character specified in accept
 *       (It excludes terminating null-characters).
 *
 * @s: pointer to input string - the string to be scanned
 * @accept: pointer to string containing characters to match
 *
 * Return: It returns a pointer to the character in @s that 
 *      matches one of the characters in @accept, else returns NULL.
*/

char *_strpbrk(char *s, char *accept)
{
    int i, j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
                return (s + i);
            j++;
        }
        i++;
    }
    return ('\0');
}
