#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  _isdigit - Entry point of the program
 *
 * Description: This is the entry point of the program.
 * @c : to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c<= '9')
		return (1);
	else
		return (0);
}
