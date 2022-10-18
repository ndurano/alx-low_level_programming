#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: Function that checks for lowercase characters
 *
 * @c: The input character to check
 *
 * Return: int
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);

}
