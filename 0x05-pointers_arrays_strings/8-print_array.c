#include"main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: input parameter for elements
 * @a: input parameter for string
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; ++m)
	{
		if (m != (n - 1))
			printf("%d, ", a[m]);
		else
			printf("%d", a[m]);
	}
	printf("\n");
}
