#include "main.h"

/**
 * get_function - function specifiers.
 *
 * @con_spec: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */

int get_function(char con_spec, va_list args)
{
	int i = 0;
	int count_fun = 0;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digit},
		{'i', print_digit},
		{0, NULL}
	};

	while (spec[i].specifiers)
	{
		if (con_spec == spec[i].specifiers)
		{
			count_fun += spec[i].f(args);
			return (count_fun);
		}
		i++;
	}

	return (0);
}
