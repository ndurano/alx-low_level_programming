#include"main.h"

/**
 * print_most_numbers - print 0 - 9 
 *                omit 2 and 5
 *               you can only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; ++number)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + 48);
	}
	_putchar('\n');
}
