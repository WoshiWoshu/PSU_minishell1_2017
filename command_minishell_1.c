/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** built in and home made commands
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

static void variable_check_cd_dash_conditions(minishell_variable_t
					      *minishell_variable)
{
	if (minishell_variable->check_cd_dash == 0)
		getcwd(minishell_variable->array_cd_dash_1,
		       sizeof(minishell_variable->
			      array_cd_dash_1) * 256);
	if (minishell_variable->check_cd_dash == 1)
		getcwd(minishell_variable->array_cd_dash_2,
		       sizeof(minishell_variable->
			      array_cd_dash_2) * 256);
}

static void cd_dash(minishell_variable_t *minishell_variable,
		    char **envp, char **av,
		    char *new_line,
		    char *new_line_one_param)
{
	if (my_strcmp("cd -", new_line_one_param) == 0) {
		if (minishell_variable->check_cd_dash == 0) {
			getcwd(minishell_variable->array_cd_dash_2,
			       sizeof(minishell_variable->
				      array_cd_dash_2) * 256);
			chdir(minishell_variable->array_cd_dash_1);
			minishell_variable->check_cd_dash = +1;
			mysh(envp, av, *minishell_variable);
		}
		if (minishell_variable->check_cd_dash == 1) {
			getcwd(minishell_variable->array_cd_dash_1,
			       sizeof(minishell_variable->
				      array_cd_dash_1) * 256);
			chdir(minishell_variable->array_cd_dash_2);
			minishell_variable->check_cd_dash = 0;
			mysh(envp, av, *minishell_variable);
		}
	}
}

static void home_made_commands_cd_parameter(char *new_line,
					    char *new_line_one_param,
					    char **envp, char **av,
					    minishell_variable_t *minishell_variable,
					    parsing_m1_variables_t *
					    parsing_m1_variables)
{
	cd_dash(minishell_variable, envp, av, new_line, new_line_one_param);
	if (my_strcmp("cd ~", new_line_one_param) == 0) {
		variable_check_cd_dash_conditions(minishell_variable);
		chdir("/home/gabriel");
		mysh(envp, av, *minishell_variable);
	}
	if (my_strcmp("cd ", new_line_one_param) < 0) {
		variable_check_cd_dash_conditions(minishell_variable);
		if (chdir(parsing_m1_variables->
			  new_array_one_param_cpy) == -1) {
			my_printf("%s: ", parsing_m1_variables->
				  new_array_one_param_cpy);
			my_putstr("No such file or directory.\n");
		}
		mysh(envp, av, *minishell_variable);
	}
}

void home_made_commands_cd(char *new_line,
			   char *new_line_one_param,
			   parsing_m1_variables_t *parsing_m1_variables,
			   char **envp, char **av,
			   minishell_variable_t *minishell_variable)
{
	home_made_commands_cd_parameter(new_line,
					new_line_one_param,
					envp,
					av,
					minishell_variable,
					parsing_m1_variables);
	if (my_strcmp("~", new_line) == 0) {
		variable_check_cd_dash_conditions(minishell_variable);
		chdir("/home/gabriel");
		mysh(envp, av, *minishell_variable);
	}
	if (my_strcmp("cd", new_line) == 0) {
		variable_check_cd_dash_conditions(minishell_variable);
		chdir("/home/gabriel");
		mysh(envp, av, *minishell_variable);
	}
}
