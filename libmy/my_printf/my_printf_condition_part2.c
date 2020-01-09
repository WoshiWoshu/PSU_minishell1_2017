/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** part2 of content of conditions if in my_printf.c
*/

#include <stdarg.h>
#include "my_printf.h"
#include "include/my.h"

int flag_b(int i, va_list ap)
{
	unsigned int b = 0;

	b = va_arg(ap, unsigned int);
	decimal_to_binary(b);
	i = i + 2;
	return (i);
}

int flag_o(int i, va_list ap)
{
	unsigned int o = 0;

	o = va_arg(ap, unsigned int);
	decimal_to_octal(o);
	i = i + 2;
	return (i);
}

int flag_c(int i, va_list ap)
{
	int c = 0;

	c = va_arg(ap, int);
	my_putchar(c);
	i = i + 2;
	return (i);
}

int flag_X(int i, va_list ap)
{
	unsigned int X = 0;

	X = va_arg(ap, unsigned int);
	decimal_to_hexadecimal_X(X);
	i = i + 2;
	return (i);
}

int flag_S(int i, va_list ap)
{
	char *r;

	r = va_arg(ap, char *);
	for (int v = 0;r[v] != '\0';v++) {
		if (r[v] >= 127 || r[v] < 32) {
			my_putchar('\\');
			decimal_to_octal_man_ascii(r[v]);
		} else {
			my_putchar(r[v]);
		}
	}
	i = i + 2;
	return (i);
}
