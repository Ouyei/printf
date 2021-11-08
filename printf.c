#include "main.h"
#include <unistd.h>
/**
 * _printf - Emulate the original.
 *
 * @format: Format by specifier.
 *
 * Return: count of chars.
 */

int _printf(const char *format, ...)
{
	int i, j, count, not_spec;
	va_list args;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', '\0'}
	};
	i = count =  0;
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
				break;
			j = 0;
			while (spec[j].specifiers)
			{
				not_spec = 1;

				if (format[i + 1] == spec[j].specifiers)
				{
					count += spec[j].f(args);
					not_spec = 0;
					break;
				}
				j++;
			}
			i++;
			if (not_spec == 1)
				count += write(1, &format[i], 1);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
