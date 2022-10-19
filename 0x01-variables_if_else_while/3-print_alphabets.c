#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	char lower = 'a';

	char upper = 'A';



	/*prints a - z*/

	while (lower <= 'z')

	{

		putchar(lower);

		++lower;

	}



	/*print A - Z*/

	while (upper <= 'Z')

	{

		putchar(upper);

		++upper;

	}

	putchar('\n');



	return (0);

}
