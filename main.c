/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** main.c
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

int main(int ac, char **av, char **envp)
{
	minishell_variable_t minishell_variable;

	minishell_variable.check_cd_dash = 0;
	minishell_variable.array_cd_dash_1 = malloc(sizeof(char) * 256);
	minishell_variable.array_cd_dash_2 = malloc(sizeof(char) * 256);
	getcwd(minishell_variable.array_cd_dash_1,
	       sizeof(minishell_variable.array_cd_dash_1) * 256);
	mysh(envp, av, minishell_variable);
	return (0);
}
