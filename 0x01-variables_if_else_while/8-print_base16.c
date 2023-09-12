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
	char ch;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i);
	}	
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
