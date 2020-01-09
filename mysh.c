/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** uncomplete mini terminal
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "mysh.h"
#include "include/my.h"
#include "include/my_printf.h"
#include "include/my_minishell_1.h"

void to_array_2d(char **envp, char **test_2)
{
	for (int f = 0;envp[f] != NULL;f++) {
		test_2[f] = malloc(sizeof(char) * (my_strlen(envp[f]) + 1));
		for (int g = 0;envp[f][g] != '\0';g++) {
			test_2[f][g] = envp[f][g];
		}
	}
}

void to_build_in(char *line, char *new_line, char **envp, char **av)
{
	int i = 0;
	char tab[1000];
	char *array_2 = malloc(sizeof(char) * 260);
	char **tabu_2 = malloc(sizeof(char) * 800);
	char *array_opt = malloc(sizeof(char) * 260);

	i = to_parse_first_argument(line, tab, i);
	to_parse_next_argument(i, line, tab, array_2, tabu_2, envp);
	if (to_process_son(line, envp, array_opt, tabu_2, tab) == 1) {
		my_printf("%s", new_line);
		my_putstr(": Command not found.\n");
		exit(0);
	}
}

static void mysh_to_parse_functions(char *line,
				    char *new_line,
				    char *new_line_one_param,
				    parsing_m1_variables_t *
				    parsing_m1_variables,
				    char **envp, char **av,
				    minishell_variable_t minishell_variable)
{
	if (check_EOF_to_back_slash_n(line) == 1)
		exit(0);
	if (back_slash_n_spaces_check(line) == 0)
		mysh(envp, av, minishell_variable);
	line = back_slash_n_back_slash_0(line);
	line = tabulations_to_spaces(line);
}

static void mysh_commands(char *line,
			  char *new_line,
			  char *new_line_one_param,
			  parsing_m1_variables_t *
			  parsing_m1_variables,
			  char **envp, char **av,
			  minishell_variable_t minishell_variable,
			  char **test_2)
{
	home_made_command_exit(new_line, envp, av, &minishell_variable);
	home_made_commands_cd(new_line, new_line_one_param,
			      parsing_m1_variables,
			      envp, av, &minishell_variable);
	home_made_command_env(new_line, line, envp, av, test_2,
			      &minishell_variable);
}

char* mysh(char **envp, char **av, minishell_variable_t minishell_variable)
{
	char *line = NULL;
	char *new_line = NULL;
	char *new_line_one_param = NULL;
	char **test_2 = malloc(sizeof(char) * 1000);
	ssize_t bufsize = 0;
	parsing_m1_variables_t parsing_m1_variables;

	parsing_m1_variables.new_array_one_param_cpy =
		malloc(sizeof(parsing_m1_variables_t) * 1000);
	to_array_2d(envp, test_2);
	my_printf("%s", "$> ");
	if (getline(&line, &bufsize, stdin) == -1)
		exit(0);
	mysh_to_parse_functions(line, new_line, new_line_one_param,
				&parsing_m1_variables,
				envp, av, minishell_variable);
	new_line = delet_spaces(line, new_line);
	new_line_one_param =
		delet_spaces_with_one_parameter(line, new_line_one_param,
						&parsing_m1_variables);
	mysh_commands(line, new_line, new_line_one_param, &parsing_m1_variables,
		      envp, av, minishell_variable, test_2);
}
