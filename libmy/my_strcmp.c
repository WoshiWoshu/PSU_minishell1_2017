/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;
	int detect = 0;

	while (s1[i] != '\0' && s2[j] != '\0') {
		if (s1[i] != s2[j])
			detect++;
		i++;
		j++;
	}
	if (detect == 0 && my_strlen(s1) == my_strlen(s2))
		return (0);
	if (detect == 0 && my_strlen(s1) < my_strlen(s2))
		return (-1);
	if (detect == 0 && my_strlen(s1) > my_strlen(s2))
		return (1);
	else {
		return (84);
	}
}
