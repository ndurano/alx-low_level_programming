#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all aplhabets apart from q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)

{

	char alphabet = 'a';



	while (alphabet <= 'z')

	{

		if (alphabet == 'e' || alphabet == 'q')

			++alphabet;

		putchar(alphabet);

		++alphabet;

	}

	putchar('\n');



	return (0);

}
