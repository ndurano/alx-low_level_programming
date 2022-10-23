#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int number = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	/*print the first few digits*/
	if ((number / 10) > 0)
		print_number(number / 10);

	/*print the last digit*/
	_putchar((number % 10) + 48);
}
