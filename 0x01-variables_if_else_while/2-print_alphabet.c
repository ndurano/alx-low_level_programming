#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet letters in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);

		a++;

	}

	putchar('\n');

	return (0);

}
