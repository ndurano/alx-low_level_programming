#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Program that prints the alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int l;

	int n = 0;

	while (n < 10)

	{

		l = 'a';

		while (l <= 'z')

		{
			_putchar(l);

			l += l;
		}

		_putchar(10);

		n += a;

	}

}
