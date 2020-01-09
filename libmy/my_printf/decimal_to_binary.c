/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** function that convert number from decimal to hexadecimal base
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

char *decimal_to_binary(unsigned int x)
{
	unsigned int x1 = 0;
	char x2 = 0;
	char *array = malloc(sizeof(char)*x+1);
	int i;

	i = 0;
	while (x != 0) {
		x1 = x % 2;
		x2 = x1 + '0';
		array[i] = x2;
		x = x / 2;
		i++;
	}
	array[i] = '\0';
	my_revstr(array);
	return (array);
}
