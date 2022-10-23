#include"main.h"

/**
 * more_numbers - print numbers between 0 - 14 ten times and you
 *	you	can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int number, row, count;

	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			number = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				number = count % 10;
			}
			_putchar(number + 48);
		}
		_putchar('\n');
	}
}
