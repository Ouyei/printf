#include "main.h"
#include <unistd.h>

/**
 * print_char - print char
 *
 * @arg: argument.
 */

void print_char(va_list arg)
{
	write(1, &arg, 1);
}
