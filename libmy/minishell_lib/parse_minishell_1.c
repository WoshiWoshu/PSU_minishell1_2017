/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** minishell 1 parsing functions
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_minishell_1.h"

char *back_slash_n_back_slash_0(char *array)
{
	int i = 0;

	while (array[i] != '\n') {
		i++;
	}
	array[i] = '\0';
	return (array);
}

char *to_parse_options_and_delet_spaces(char *array,
					char *new_array)
{
	int i = 0;
	int j = 0;

	new_array = malloc(sizeof(char) * my_strlen(array));
	for (i;array[i] != '\0'; i++) {
		if (array[i] != ' ' && array[i + 1] == ' ')
			break;
	}
	i++;
	for (i, j;array[i] != '\0';i++) {
		if (array[i] != ' ') {
			new_array[j] = array[i];
			j++;
		}
	}
	new_array[j] = '\0';
	return (new_array);
}

char *delet_spaces(char *array, char *new_array)
{
	int i = 0;
	int j = 0;

	new_array = malloc(sizeof(char) * my_strlen(array));
	for (i;array[i] == ' ';i++) {
	}
	for (i;array[i] != ' ';i++, j++) {
		new_array[j] = array[i];
		if (array[i] == '\0') {
			new_array[j] = '\0';
			return (new_array);
		}
	}
	return (new_array);
}

/* static int *delet_spaces_with_one_parameter_below(int *i, */
/*						  int *j, */
/*						  int *k, */
/*						  char *new_array_one_param, */
/*						  char *array, */
/*						  parsing_m1_variables_t */
/*						  *parsing_m1_variables, */
/*						  char *array_param_container) */
/* { */
/*	array_param_container = malloc(sizeof(char) * 265); */
/*	new_array_one_param = malloc(sizeof(char) * 265); */

/*	for (*i;array[*i] == ' ';*(i++)) { */
/*	} */
/*	for (*i;array[*i] != ' ';*(i++), *(j++)) { */
/*		new_array_one_param[*j] = array[*i]; */
/*		if (array[*i] == '\0') { */
/*			new_array_one_param[*j] = '\0'; */
/*			//return (new_array_one_param); */
/*			return (0); */
/*		} */
/*	} */
/*	for (*i;array[*i] == ' ';*(i++)) { */
/*	} */
/*	for (*i;array[*i] != ' ';*(i++), *(k++)) { */
/*		array_param_container[*k] = array[*i]; */
/*	} */
/*	array_param_container[*k] = '\0'; */
/*	my_strcpy(parsing_m1_variables->new_array_one_param_cpy, */
/*		  array_param_container); */
/* } */

char *delet_spaces_with_one_parameter(char *array, char *new_array_one_param,
				      parsing_m1_variables_t *parsing_m1_variables)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *array_param_container = malloc(sizeof(char) * 265);

	new_array_one_param = malloc(sizeof(char) * 265);
	for (i;array[i] == ' ';i++) {
	}
	for (i;array[i] != ' ';i++, j++) {
		new_array_one_param[j] = array[i];
		if (array[i] == '\0') {
			new_array_one_param[j] = '\0';
			return (new_array_one_param);
		}
	}
	for (i;array[i] == ' ';i++) {
	}
	for (i;array[i] != ' ';i++, k++) {
		array_param_container[k] = array[i];
		if (array[i] == '\0') {
			break;
		}
	}
	array_param_container[k] = '\0';
	my_strcpy(parsing_m1_variables->new_array_one_param_cpy,
		  array_param_container);
	/* if (delet_spaces_with_one_parameter_below(&i, &j, &k, new_array_one_param, array, */
	/*					  parsing_m1_variables, */
	/*					  array_param_container) == 0) */
	/*	return (new_array_one_param); */
	new_array_one_param[j] = ' ';
	j++;
	for (k = 0;array_param_container[k] != '\0';k++, j++) {
		new_array_one_param[j] = array_param_container[k];
	}
	new_array_one_param[j] = '\0';
	for (int g = 0;new_array_one_param[g] != '\0'; g++) {
		if (new_array_one_param[g] == ' '
		    && new_array_one_param[g + 1] == '\0')
			new_array_one_param[g] = '\0';
	}
	free(array_param_container);
	return (new_array_one_param);
}
