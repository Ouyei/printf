#include "main.h"

/**
 * eval_format - Evaluate specifiers.
 *
 * @con_spec: Conversion specifiers
 */

void eval_format(const char con_spec, ...)
{
	va_list args;
	int i = 0;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', '\0'}
	};

	va_start(args, con_spec);
	while (spec[i].specifiers)
	{
		if (con_spec == spec[i].specifiers)
		{
			spec[i].f(args);
		}
		i++;
	}
}
