#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: input of table n
 * Return: nothing.
 */
void print_times_table(int n)
{
	int row, column;
	int mult = 0;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				mult = (row * column);
				if (mult < 10)
				{
					if (column != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (column != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
