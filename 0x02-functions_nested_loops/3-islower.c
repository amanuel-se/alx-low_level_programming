#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * _islower - Entry point of the program
 *
 * Description: This is the entry point of the program.
 *  * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
