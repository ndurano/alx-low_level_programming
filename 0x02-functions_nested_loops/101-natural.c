#include <stdio.h>
/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */

int main(void)
{

	int multiply = 0;

	int result = 0;



	while (multiply < 1024)

	{

		if (multiply % 3 == 0 || multiply % 5 == 0)

		{

			result += multiply;

		}

		multiply += 1;

	}

	printf("%d\n", result);

	return (0);

}
