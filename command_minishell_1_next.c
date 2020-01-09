/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** minishell few commands
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

void home_made_command_exit(char *new_line, char **envp, char **av,
			    minishell_variable_t *minishell_variable)
{
	if (my_strcmp("exit", new_line) == 0) {
		my_putstr("exit\n");
		exit(0);
	}
	if (my_strcmp("setenv", new_line) == 0) {
		exit(0);
	}
	if (my_strcmp("unsetenv", new_line) == 0) {
		exit(0);
	}
}

void home_made_command_env(char *new_line, char* line,
			   char **envp, char **av, char **test_2,
			   minishell_variable_t *minishell_variable)
{
	if (my_strcmp("env", new_line) == 0) {
		for (int l = 0;test_2[l] != NULL;l++) {
			my_printf("%s\n", test_2[l]);
		}
		mysh(envp, av, *minishell_variable);
	} else {
		to_build_in(line, new_line, envp, av);
		mysh(envp, av, *minishell_variable);
	}
}
