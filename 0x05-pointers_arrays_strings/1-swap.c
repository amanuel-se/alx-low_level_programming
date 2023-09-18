#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * swap_int - Entry point of the program
 *
 * Description: This is the entry point of the program.
 * @a: to check
 * @b: to check
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a
	*a = *b;
	*b = m;
}
