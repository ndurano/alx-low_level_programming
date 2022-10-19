#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	int number = 48; /*48; decimal rep of 0*/



	while (number <= 102) /*102; decimal rep of f*/

	{

		putchar(number);



		/* after 9 we jump till 96; `*/

		if (number == 57)

			number += 39;

		++number;

	}

	putchar('\n');



	return (0);

}
