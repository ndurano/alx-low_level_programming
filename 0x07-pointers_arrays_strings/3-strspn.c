/**
 * _strspn - a function returns the length of the initial substring
 *       of the string pointed to by s that is made up of only 
 *      those character contained in the string pointed to by accept.
 *
 * @s: pointer to string input - string to be scanned
 * @accept: srting containing the characters to match
 *
 * Return: the number of characters in the initial segment of s
 *      which consists only of characters from accept
*/

unsigned int _strspn(char *s, char *accept)
{
    int i, j, f;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        f = 1; /*flag status*/
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                f = 0; /*success*/
                break;
            }
            j++;
        }
        if (f == 1)
            break;
        i++;
    }

    return (i);
}
