#include "_putchar.h"
/**
 * main - Entry point
 *
 * Description: Program that prints Putchar
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n = 0;

	char str_put[8] = "_putchar";

	while (n < 8)

	{

		_putchar(str_put[n]);

		n += 1;

	}

	_putchar('\n');

	return (0);

}
