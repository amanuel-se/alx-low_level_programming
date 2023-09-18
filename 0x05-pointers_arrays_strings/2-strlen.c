#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * _strlen - Entry point of the program
 *
 * Description: This is the entry point of the program.
 * @s: to check
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
