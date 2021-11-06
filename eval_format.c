#include "main.h"


/**
 * eval_format - Evaluate specifiers.
 * @con_spec: Conversion specifiers
 *
 * Return: Return 0 on success.
 */

void eval_format(const char * const con_spec, ...)
{
	va_list arg;
	int i = 0, j;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
	};

	va_start(arg, con_spec);
	while (con_spec && con_spec[i])
	{
		j = 0;
		while (spec[j].specifiers)
		{
			if (con_spec[i] == spec[j].specifiers)
			{
				spec[j].f(arg);
			}
			j++;
		}
		i++;
	}
}
