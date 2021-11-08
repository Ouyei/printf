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
	char specifiers;
	void (*f)(va_list);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);
void eval_format(const char con_spec, ...);

/*Conversion specifiers*/
void print_char(va_list args);
void print_string(va_list args);
#endif
