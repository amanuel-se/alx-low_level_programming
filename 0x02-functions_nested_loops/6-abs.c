#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * _abs - Entry point of the program
 *
 * Description: This is the entry point of the program.
 *
 * @n: the int to check
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
