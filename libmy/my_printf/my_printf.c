/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** function that print specific character(s)
*/

#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"
#include "my_printf.h"

int my_printf(const char *format, ...)
{
	int i;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0') {
		i = my_printf_condition_content_part1(i, format, ap);
	}
	va_end(ap);
	return (0);
}
