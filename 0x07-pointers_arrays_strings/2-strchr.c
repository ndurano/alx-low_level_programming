/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array of characters
 *
 * Return: a pointer to the first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        s++;
    }
    
    if (*s == c)
        return (s);
    /*return null if c is not found*/
    return ('\0');
}
