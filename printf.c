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
	int i, count, count_fun;
	va_list args;

	i = count =  0;
	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		count_fun = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1])
			{
				break;
			}
			else
			{
				i++;
				count_fun += get_function(format[i], args);
				if (count_fun == 0)
					count += write(1, &format[i], 1);
				else if (count_fun < 0)
					return (-1);
			}
		}
		else
			count += write(1, &format[i], 1);
		i++;
		count += count_fun;
	}
	va_end(args);
	return (count);
}
