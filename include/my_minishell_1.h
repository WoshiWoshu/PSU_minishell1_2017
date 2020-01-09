/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** minishell 1 headers
*/

#ifndef MINISHELL1_H_
#define MINISHELL1_H_

#include <stdbool.h>

typedef struct parsing_m1_variables_t parsing_m1_variables_t;
struct parsing_m1_variables_t {
	char *new_array_one_param_cpy;
};

char *back_slash_n_back_slash_0(char *array);
char *delet_spaces(char *array, char *new_array);
char *delet_spaces_with_one_parameter(char *array, char *new_array_one_param,
				      parsing_m1_variables_t
				      *parsing_m1_variables);
char *to_parse_options_and_delet_spaces(char *array,
					char *new_array);
bool check_EOF_to_back_slash_n(char *array);
char *tabulations_to_spaces(char *array);
int back_slash_n_spaces_check(char *array);

#endif /* MINISHELL1_H_ */
