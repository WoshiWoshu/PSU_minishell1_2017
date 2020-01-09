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

int count_line(char *buffer)
{
	int i;
	int g;
	int line;
	
	i = 0;
	g = 0;
	line = 0;
	while (buffer[i] != '\0') {
		if (buffer[i] == '\n')
			g++;
		i++;
	}
	line = g;
	return (line);
}
