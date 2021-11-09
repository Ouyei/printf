.\" Manpage for _printf
.TH _printf (3) "11/06/2021" "1.0" "_printf Programmer's Manual"

.SH NAME

_printf

.SH SYNOPSIS

.B #include "main.h"
.PP

.B int _printf(const char *format, ...)
.B ...)

.SH DESCRIPTION

.PP

Produce output to stdout according to a format described below similar to the printf() function.

.SH OPTIONS

.RS
.nf
- %c -  Prints a single char.
- %s -  Prints the argument as a string.
- %% -  Prints a single perecentage sign to the stream.
- %i / %d - Prints signed decimal integer.
.RE

.SH EXAMPLES

.B With main.c we can test our functions:

.PP
#include "main.h"
.PP
_printf("Character:[%c]\n", 'H');
.PP
Output: character: H
.PP
_printf("String:[%s]\n", "I am a string !");
.PP
 Output: string: I am s string !
.PP
_printf("Percent:[%%]\n");
.PP
Output: percent: %
.PP
_printf("integer: %i\n", 10);
.PP
Output: integer: 10
.PP
_printf("decimal: %d\n", 100);
.PP
Output: decimal: 100

.B Return value

On success, _printf returns the number of printed characters. If formats is error or NULL returns -1

.SH AUTHORS

Bruno Rodriguez, Oscar Bedat
