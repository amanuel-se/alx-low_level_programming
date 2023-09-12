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
	int i;
	int j;

	for (i = 0; i < 16 ; i++)
	{	
	if (i >= 10)
	{	
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	}
	else
	{	
		putchar(i);
	}
	}
	putchar('\n');
	return (0);
}
