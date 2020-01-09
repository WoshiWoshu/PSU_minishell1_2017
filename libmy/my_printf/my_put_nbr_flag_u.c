/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** same function as "my_putnbr" but optimized for flag u "if" condition
*/

#include "include/my.h"

long my_put_nbr_flag_u(long nbr)
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
