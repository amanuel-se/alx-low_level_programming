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

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}	
