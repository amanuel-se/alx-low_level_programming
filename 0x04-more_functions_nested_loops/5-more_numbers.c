#include "main.h"
/**
 * more_numbers - print 0 to 14
 *
 * Description: This is the entry point of the program.
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
	_putchar('\n');
	}
}