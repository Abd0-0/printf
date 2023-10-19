#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 *
 * @format: The format string to print.
 *
 * Return: the number of characters.
 */
int _printf(const char *format, ...)
{
	char *ptr, *buf;
	int i, j, len, counter;
	va_list argp;
	s_type type[] = {
		{"c", pc},
		{"s", ps},
		{NULL, NULL}
	};

	buf = malloc_checked(BUFSIZE);
	ptr = buf;
	va_start(argp, format);

	if (!format)
		return (-1);

	len = _strlen(format);

	for (i = 0; i < len + 1; i++, ptr++)
	{
		if (format[i] != '%' && format[i])
			*ptr = format[i];

		else
		{
			i++;
			for (j = 0; type[j].f != NULL; j++)
			{
				if (format[i] == type[j].fs[0] && format[i])
					ptr = type[j].f(argp, ptr);
			}
		}
	}
	counter = write(1, buf, _strlen(buf));
	va_end(argp);
	free(buf);
	return (counter);
}
