/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include "include/my.h"

int my_put_nbr(int nbr)
{
	if (nbr < 0) {
		my_putchar('-');
		my_put_nbr(-nbr);
	} else if (nbr > 9) {
		my_put_nbr(nbr / 10);
		my_put_nbr(nbr % 10);
	} else {
		my_putchar(nbr + '0');
	}
	return (nbr);
}
