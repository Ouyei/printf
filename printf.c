#include "main.h"
#include <unistd.h>
/**
 * _printf - Emulate the original.
 * @format: Format by specifier
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
			eval_format(format, args);
		else
			return (write(1, &format[i], 1));
	}
	va_end(args);

	return (0);
}
