/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** function that handle the conditions of the "decimal_to_octal" main function
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "my_printf.h"

int decimal_to_octal_condition_man_ascii(char *array, int i)
{
	if (my_strlen(array) < 2) {
		array[i] = '0';
		array[i + 1] = '0';
	}
	if (my_strlen(array) < 3) {
		array[i] = '0';
	}
	return (i);
}
