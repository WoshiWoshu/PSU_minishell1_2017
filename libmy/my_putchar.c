/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include<unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}
