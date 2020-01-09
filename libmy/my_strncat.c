/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include "include/my.h"

char *my_strncat(char *dest, const char *src, int n)
{
	int j = 0;
	int i;

	for (i = 0;dest[i] != '\0';i++) {
	}
	if (dest[i] == '\0') {
		for (int k = 0;k < n;k++) {
			dest[i] = src[k];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
