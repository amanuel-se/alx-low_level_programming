#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int nl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	nl = n % 10;
	if (nl > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nl);
	}
	else if (nl == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nl);
	}
	else if (nl < 6 && nl != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nl);
	}

	return (0);
}
