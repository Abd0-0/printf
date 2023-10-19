#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

#define BUFSIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *s);


/**
 * struct type - Struct type
 *
 * @fs: Format specifier
 * @f: The function associated
 */
typedef struct type
{
	char *fs;
	char *(*f)(va_list argp, char *buf);
} s_type;

char *ps(va_list argp, char *buf);
char *pc(va_list argp, char *buf);
char *pi(va_list argp, char *buf);
char *pf(va_list argp, char *buf);
char *pd(va_list argp, char *buf);




#endif /* ifndef MAIN_H */
