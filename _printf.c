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
	char *ptr, *buf = malloc_checked(BUFSIZE);
	int i, j, len, counter = 0;
	va_list argp;

	va_start(argp, format);
	ptr = &buf[0];

	s_type type[] = {
		{"c", pc},
		{"s", ps},
		{"i", pi},
		{"d", pi},
		{NULL, NULL}
	};

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
				if (format[i] == type[j].f[0] && format[i])
					ptr = type[j].f(argp, ptr);
			}
		}
	}
	counter = write(1, &buf, _strlen(buf));
	va_end(argp);
	free(buf);
	return (counter);
}
