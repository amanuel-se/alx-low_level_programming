#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * _isupper - Entry point of the program
 *
 * Description: This is the entry point of the program.
 * @c: to look for
 * Return: 1 if c is uppercase, 0 Otherwise.
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
