/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** function that convert number from decimal to octal base
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "my_printf.h"

void decimal_to_octal(unsigned int x)
{
	unsigned int x1 = 0;
	char x2 = 0;
	char *array = to_malloc(array, x);
	unsigned int i;

	i = 0;
	while (x != 0) {
		x1 = x % 8;
		x2 = x1 + '0';
		array[i] = x2;
		x = x / 8;
		i++;
	}
	array[i + 2] = '\0';
	my_revstr(array);
	my_putstr(array);
}
