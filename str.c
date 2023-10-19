#include "main.h"

/**
 * ps - function to print strings.
 *
 * @argp: pointer to the argument to print.
 * @buf: the right position in the buf.
 *
 * Return: position of last character.
 */

char *ps(va_list argp, char *buf)
{
	int i, len;
	char *p = va_arg(argp, char *);

	if (!p)
		p = "(null)";

	i = 0;
	len = _strlen(p);

	while (i < len)
	{
		*buf = p[i];
		buf++;
		i++;
	}

	return (buf - 1);
}
