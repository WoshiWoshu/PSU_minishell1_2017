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

void decimal_to_hexadecimal_for_flag_p(unsigned int x)
{
	unsigned int x1 = 0;
	char x2 = 0;
	char *array = to_malloc_2(array);
	int i;

	to_display_hexadecimal();
	i = 0;
	while (x != 0) {
		x1 = x % 16;
		x2 = decimal_to_hexadecimal_while_flag_p(x1, x2);
		array[i] = x2;
		x = x / 16;
		i++;
	}
	if (my_strlen(array) < 2) {
		array[i] = '0';
	}
	array[i+1] = '\0';
	my_revstr(array);
	my_putstr(array);
}

char *to_malloc_2(char *array)
{

	array = malloc(sizeof(char)*100000);
	return (array);
}
