#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This is the entry point of the program.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
