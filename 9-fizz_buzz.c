#include"main.h"

/**
#include"main.h"

/**
 * main - print numberbers 1 - 100 followed by a new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 5 print Buzz
 *       numbers that are multiples of 3 and 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 1; number <= 100; ++number)
	{
		if (number % 3 == 0 && !(number % 5 == 0))
			printf("Fizz");
		else if (number % 5 == 0 && !(number % 3 == 0))
			printf("Buzz");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", number);

		if (number != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
