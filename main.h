#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char *specifiers;
	void (*f)(va_list);
} specifiers_t;

int _printf(const char *format, ...);
int eval_format(const char *c, ...);

#endif
