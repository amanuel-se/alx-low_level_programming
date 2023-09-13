#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * void print_alphabet_x10(void) - Entry point of the program
 *
 * Description: This is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
        char ch;
	int i = 0;

	while(i<10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
