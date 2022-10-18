#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: Function that computes the absolute value of an integer
 *
 *@x: The number to check
 * Return: int
 */
int print_last_digit(int x)
{

	x %= 10;

	if (x < 0)

		x *= -1;



	_putchar(x + '0');

	return (x);

}
