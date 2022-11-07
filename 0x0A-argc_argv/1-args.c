#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @argc: holds the number of arguments passed from CLI
 * @argv: array pointer that holds the arguments passed from CLI
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, k;

	while (i < argc)
	{
		k = i;
		i++;
	}
	printf("%d\n", k);
	return (0);
}
