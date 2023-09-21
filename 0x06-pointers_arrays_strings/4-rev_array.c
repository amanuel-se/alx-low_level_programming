#include "main.h"
/**
 * reverse_array - reverse array
 * @a: input value
 * @n: number of element
 *
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
