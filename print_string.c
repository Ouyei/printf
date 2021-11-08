#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string.
 *
 * @args: argument.
 */

void print_string(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	for (i = 0; str; i++)
		write(1, &str + i, 1);
}
