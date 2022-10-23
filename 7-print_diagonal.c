 * print_diagonal - Draw a diagonal line on the terminal
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int start, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (start = 1; start <= n; ++start)
		{
			for (spaces = 1; spaces <= start; ++spaces)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
