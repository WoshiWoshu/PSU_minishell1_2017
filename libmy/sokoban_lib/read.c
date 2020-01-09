/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib
*/

#include <ncurses.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_sokoban_v2.h"

char *read_to_param(char **av, char *buffer)
{
	int val;

	buffer = malloc(sizeof(char) * 10000);	
	open_file(av[1], &val);
	put_in(buffer, val);
	return (buffer);
}

char *read_to(char *array)
{
	int val;
	char *buffer;

	buffer = malloc(sizeof(char) * 10000);
	open_file(array, &val);
	put_in(buffer, val);
	return (buffer);
}

int open_file(char *name_file, int *val)
{
	*val = open(name_file, O_RDONLY, S_IRUSR | S_IRGRP | S_IROTH);
	if (*val == -1) {
		write(2, "open error\n", 11);
		return(84);
	}
	return(0);
}

void put_in(char *buffer, int val)
{
	int i;
	
	i = 0;
	while (read(val, buffer + i, 1) == 1) {
		i = i + 1;
	}
	buffer[i] = '\0';
}
