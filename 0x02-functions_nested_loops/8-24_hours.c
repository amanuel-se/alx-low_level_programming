#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * jack_bauer( - Entry point of the program
 *
 * Description: This is the entry point of the program.
 *
 * Return: min in 24 hr
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

