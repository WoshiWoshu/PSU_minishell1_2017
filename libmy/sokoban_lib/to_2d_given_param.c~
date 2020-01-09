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

void to_2d_given_param(char *buffer, int line, int column, char array[line][column])
{
	for(int k = 0 ; k < line ; k++) {
		for(int j = 0 ; j < column ; j++) {
			array[k][j] = buffer[k * (column + 1) + j];
		}
	}
}
