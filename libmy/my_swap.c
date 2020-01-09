/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include "include/my.h"
#include <unistd.h>

void my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
