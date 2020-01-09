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

int count_column(char *buffer)
{
	int m = 0;
	int n;
	int column;

	n = 0;
	while (buffer[n] != '\n') {
		m++;
		n++;
	}
	column = m;
	return(column);
}
