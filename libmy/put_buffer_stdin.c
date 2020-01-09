/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** function that read from stdin
*/

#include <unistd.h>
#include <stdbool.h>
#include "../include/my.h"

char *put_in_stdin(char *buffer, int val, check_return_t *check_return)
{
	int i = 0;

	read(val, buffer , 256);
	while (buffer[i] != '\n') {
		if (buffer[i] == 0) {
			check_return->inspect = 1;
			break;
		}
		i++;
	}
	return (buffer);
}
