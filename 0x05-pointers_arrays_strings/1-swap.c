/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: void (nothing)
*/

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
