#include "main.h"
#include <unistd.h>

/**
 * print_char - print char
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (!c)
		return (-1);

	write(1, &c, 1);

	return (1);
}
