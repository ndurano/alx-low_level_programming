#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: Function that checks for lowercase characters
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
