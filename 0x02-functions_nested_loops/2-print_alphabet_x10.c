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
	int a;

	int b = 0;

	while (b < 10)

	{

		a = 'a';

		while (a <= 'z')

		{
			_putchar(a);

			a += a;
		}

		_putchar(10);

		b += a;

	}

}
