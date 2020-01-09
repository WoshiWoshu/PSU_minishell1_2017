/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** functions that handle the conditions
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "my_printf.h"

int decimal_to_hexadecimal_first_condition(unsigned int x1, char x2)
{

	if (x1 == 10) {
		x2 = 'a';
	}
	if (x1 == 11) {
		x2 = 'b';
	}
	if (x1 == 12) {
		x2 = 'c';
	}
	if (x1 == 13) {
		x2 = 'd';
	}
	if (x1 == 14) {
		x2 = 'e';
	}
	if (x1 == 15) {
		x2 = 'f';
	}
	return (x2);
}

int decimal_to_hexadecimal_while_loop_content(unsigned int x1, unsigned int x2)
{
	if (x1 > 9 && x1 < 16) {
		x2 = decimal_to_hexadecimal_first_condition(x1, x2);
		return (x2);
	} else {
		x2 = x1 + '0';
		return (x2);
	}
}

int decimal_to_hexadecimal_first_condition_X(unsigned int x1, char x2)
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

int decimal_to_hexa_while_content_X(unsigned int x1, unsigned int x2)
{
	if (x1 > 9 && x1 < 16) {
		x2 = decimal_to_hexadecimal_first_condition_X(x1, x2);
		return (x2);
	} else {
		x2 = x1 + '0';
		return (x2);
	}
}
