/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** function that handle the conditions of the my_printf function
*/

#include <stdarg.h>
#include "my_printf.h"
#include "include/my.h"

int my_printf_condition_content_part1(int i, const char *format, va_list ap)
{
	if (format[i] == '%' && format[i+1] == '%') {
		my_putchar('%');
		i = i + 2;
		return (i);
	}
	if (format[i] == '%' && format[i+1] == 'S') {
		i = flag_S(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i+1] == 'p') {
		i = flag_p(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i+1] == 'u') {
		i = flag_u(i, ap);
		return (i);
	}
	i = my_printf_condition_content_part2(i, format, ap);
	return (i);
}

int my_printf_condition_content_part2(int i, const char *format, va_list ap)
{
	if (format[i] == '%' && format[i + 1] == 'd' || format[i + 1] == 'i') {
		i = flag_d_or_i(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i + 1] == 's') {
		i = flag_s(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i + 1] == 'X') {
		i = flag_X(i, ap);
		return (i);
	}
	i = my_printf_condition_content_part3(i, format, ap);
	return (i);
}

int my_printf_condition_content_part3(int i, const char *format, va_list ap)
{
	if (format[i] == '%' && format[i + 1] == 'x') {
		i = flag_x(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i + 1] == 'b') {
		i = flag_b(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i + 1] == 'o') {
		i = flag_o(i, ap);
		return (i);
	}
	if (format[i] == '%' && format[i + 1] == 'c') {
		i = flag_c(i, ap);
		return (i);
	} else {
		my_putchar(format[i]);
		i++;
		return (i);
	}
}
