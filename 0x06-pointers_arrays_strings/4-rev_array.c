/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements in the array
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int values, j, k;

	j = 0;
	k = n - 1;

	while (j < k)
	{
		values = a[j];
		a[j] = a[k];
		a[k] = values;
		j++;
		k--;
	}
}
