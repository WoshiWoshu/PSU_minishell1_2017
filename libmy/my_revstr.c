/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** function that reverses a string
*/

#include "include/my.h"

char *my_revstr(char *str)
{
	char tempory;
	int k = my_strlen(str) - 1;
	int j = 0;

	for (int i = 0;i < k;i++) {
		tempory = str[k];
		str[k] = str[i];
		str[i] = tempory;
		k--;
	}
	return (str);
}
