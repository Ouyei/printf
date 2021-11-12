#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_rev_string - print reversed string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int print_rev_string(va_list args)
{
	int i, len = 0, last_len;
	int count_fun = 0;
	char *str = va_arg(args, char *);

	while (str[len] != '\0')
	{
		len++;
	}
	last_len = len;

	for (i = 0; i >= last_len; i++)
	{
		str[i] = str[len];
		len--;
	}

	if (!str)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		count_fun += _putchar(str[i]);

	return (count_fun);
}
