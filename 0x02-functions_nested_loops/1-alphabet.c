#include<main.h>
/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alpha_lower(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c += 1;
	}

	_putchar(10);

}
