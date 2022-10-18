#include "main.h"
/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c += 1;
	}

	_putchar(10);

}
