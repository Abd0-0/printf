#include "main.h"

/**
 * pc - function to print char.
 *
 * @argp: pointer to the argument to print.
 * @buf: the right position in the buf.
 *
 * Return: position of last character.
 */

char *pc(va_list argp, char *buf)
{
	char ch;

	ch = va_arg(argp, int);

	if (ch)
		*buf = ch;

	return (buf);
}
