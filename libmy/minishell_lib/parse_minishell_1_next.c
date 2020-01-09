/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** mysh lib
*/

#include <stdbool.h>
#include "../../include/my_minishell_1.h"

bool check_EOF_to_back_slash_n(char *array)
{
	int i = 0;

	while (array[i] != '\n') {
		if (array[i] == 0)
			return (1);
		i++;
	}
	return (0);
}

char *tabulations_to_spaces(char *array)
{
	for (int i = 0;array[i] != '\0';i++) {
		if (array[i] == '\t')
			array[i] = ' ';
	}
	return (array);
}

int back_slash_n_spaces_check(char *array)
{
	int j = 0;

	for (int i = 0;array[i] != '\n';i++) {
		if (array[i] != ' ' && array[i] != '\t')
			j++;
	}
	return (j);
}
