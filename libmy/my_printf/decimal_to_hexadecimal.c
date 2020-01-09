/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** function that convert number from decimal to hexadecimal base
*/
#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "my_printf.h"
#include <unistd.h>

void decimal_to_hexadecimal(unsigned int x)
{
	unsigned int x1 = 0;
	char x2 = 0;
	char *array = to_malloc(array, x);
	int i;

	i = 0;
	while (x != 0) {
		x1 = x % 16;
		x2 = decimal_to_hexadecimal_while_loop_content(x1, x2);
		array[i] = x2;
		x = x / 16;
		i++;
	}
	array[i + 1] = '\0';
	my_revstr(array);
	my_putstr(array);
}

void decimal_to_hexadecimal_X(unsigned int x)
{
	unsigned int x1 = 0;
	char x2 = 0;
	char *array = to_malloc(array, x);
	int i;

	i = 0;
	while (x != 0) {
		x1 = x % 16;
		x2 = decimal_to_hexa_while_content_X(x1, x2);
		array[i] = x2;
		x = x / 16;
		i++;
	}
	array[i + 1] = '\0';
	my_revstr(array);
	my_putstr(array);
}

char *to_malloc(char *array, int x)
{

	array = malloc(sizeof(char) * x + 1);
	return (array);
}
