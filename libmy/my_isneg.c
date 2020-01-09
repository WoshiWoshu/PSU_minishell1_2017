/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include "include/my.h"

int my_print_digits(double n)
{
	if (n < 0) {
		my_putchar(78);
	}
	else if (n > 0) {
		my_putchar(80);
	}
	return (n);
}
