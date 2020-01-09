/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** A function that concatenates two strings
*/

#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
	int i;

	for (i = 0;dest[i] != '\0';i++) {
	}
	for (int k = 0;src[k] != '\0';k++) {
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
