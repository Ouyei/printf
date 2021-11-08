#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int print_string(va_list args)
{
	int i;
	int count_fun = 0;
	char *str = va_arg(args, char *);

	if (!str)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count_fun++;
	}

	return (count_fun);
}
