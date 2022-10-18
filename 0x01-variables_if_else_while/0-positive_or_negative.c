#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program checks a number and determines if it positive
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n < 0)
		{

			printf("%d is %s\n", n, "negative");
		}

		else if (n > 0)
		{

			printf("%d is %s\n", n, "positive");

		}

		else

		{

			printf("%d is %s\n", n, "zero");
		}

		return (0);

}
