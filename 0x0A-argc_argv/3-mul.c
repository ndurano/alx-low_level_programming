#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two arguments passed into it
 *
 * @argc: holds the number of arguments passed from CLI
 * @argv: array pointer that holds the arguments passed from CLI
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", j);
	}
	return (0);
}
