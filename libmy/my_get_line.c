/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib
*/

#include <stdlib.h>
#include <stdbool.h>
#include "../include/my.h"

char *my_get_line(const int fd, check_return_t *check_return)
{
	char *save = malloc(sizeof(char) * SIZE);

	put_in_stdin(save, 0, check_return);
	return (save);
}
