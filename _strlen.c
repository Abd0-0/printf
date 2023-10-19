#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a pointer to a string.
 *
 * Return: the length of the string.
 */

int _strlen(const char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
