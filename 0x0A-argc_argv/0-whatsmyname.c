#include <stdlib.h>
#include <stdio.h>

/**
 * main- a program that prints its name
 *
 * @argc: holds number of arguments passed from the command-line
 * @argv: char array pointer that holds the arguments passed from the CLI
 *
 * Return: Always 0 (Success)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	printf("%s\n", argv[i]);
	return (0);
}
