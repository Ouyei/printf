#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string.
 *
 * @arg: argument.
 */

void print_string(va_list arg)
{
	int b;
	
	for (b = 0; va_arg(arg, int) == 0; b++)
		;

	write(1, &arg, b);
}
