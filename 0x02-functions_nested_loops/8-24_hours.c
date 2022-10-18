#include "main.h"
/**
 * jack_bauer- Entry point
 *
 * Description: A function prints every minute of the day of Jack Bauer
 *
 * Return: int
 */
void jack_bauer(void)
{

	int m = 0;

	int n = 0;



	while (m <= 23)

	{

		n = 0;

		while (n <= 59)

		{

			_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');

			_putchar(':');

			_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');

			_putchar('\n');

			n += 1;

		}

		m += 1;

	}

}
