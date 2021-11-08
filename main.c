#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("dd%c\n", 'j');
	printf("dd%c\n", 'j');
	return (0);
}
