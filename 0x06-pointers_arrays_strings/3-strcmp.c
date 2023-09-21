#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i]-s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[0] != '\0' && s2[0] != '\0')
	{
		i = s1[0] - s2[0];
		return (i);
	}
}	
