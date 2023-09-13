#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_sign - Entry point of the program
 *
 * Description: This is the entry point of the program.
 *
 * @n: the character to be checked
 * Return: 1 if n is a positive, 0 if n is zero, -1 otherwise
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0");
		return (0);
	}
	else
	{
		_putchar("-");
		return (-1);
	}
}
