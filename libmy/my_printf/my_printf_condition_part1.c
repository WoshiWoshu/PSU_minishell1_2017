/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include "include/my.h"
#include "my_printf.h"
#include <stdarg.h>
#include <stdio.h>

int flag_d_or_i(int i, va_list ap)
{
	int d = 0;
	d = va_arg(ap, int);
	my_put_nbr(d);
	i = i + 2;
	return (i);
}

int flag_s(int i, va_list ap)
{
	char *array1 = NULL;

	array1 = va_arg(ap, char *);
	my_putstr(array1);
	i = i + 2;
	return (i);
}

int flag_p(int i, va_list ap)
{
	int p = 0;

	p = va_arg(ap, int);
	decimal_to_hexadecimal_for_flag_p(p);
	i = i + 2;
	return (i);
}

int flag_u(int i, va_list ap)
{
	int u = 0;
	long f = 0;

	u = va_arg(ap, int);
	if (u < 0) {
		f = 4294967296;
		my_put_nbr_flag_u(f + u);
	} else {
		my_put_nbr(u);
	}
	i = i + 2;
	return (i);
}

int flag_x(int i, va_list ap)
{
	unsigned int x = 0;

	x = va_arg(ap, unsigned int);
	decimal_to_hexadecimal(x);
	i = i + 2;
	return (i);
}
