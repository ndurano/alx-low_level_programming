/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, Square1, Square2;

	Square1 = 0;
	Square2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			Square1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			Square2 += a[i];
	}
	printf("%d, %d\n", Square1, Square2);
}
