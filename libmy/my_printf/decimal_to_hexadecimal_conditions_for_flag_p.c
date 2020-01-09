/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "my_printf.h"

int decimal_to_hexadecimal_first_condition_for_flag_p(unsigned int x1, char x2)
{

	if (x1 == 10) {
		x2 = 'A';
	}
	if (x1 == 11) {
		x2 = 'B';
	}
	if (x1 == 12) {
		x2 = 'C';
	}
	if (x1 == 13) {
		x2 = 'D';
	}
	if (x1 == 14) {
		x2 = 'E';
	}
	if (x1 == 15) {
		x2 = 'F';
	}
	return (x2);
}

int decimal_to_hexadecimal_while_flag_p(unsigned int x1, unsigned int x2)
{
	if (x1 > 9 && x1 < 16) {
		x2 = decimal_to_hexadecimal_first_condition(x1, x2);
		return (x2);
	} else {
		x2 = x1 + '0';
		return (x2);
	}
}

void to_display_hexadecimal(void)
{
	my_putchar('0');
	my_putchar('x');
	my_putchar('7');
}
