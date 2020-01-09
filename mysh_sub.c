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
#include "include/my_printf.h"
#include "include/my.h"
#include "include/my_minishell_1.h"

int to_parse_first_argument(char *line, char *tab, int i)
{
	int r = 0;
	int g = 0;

	i = 0;
	while (line[i] != '\0') {
		if (line[i] != ' ') {
			tab[r] = line[i];
			r++;
		}
		if (line[i] != ' ' && line[0] == ' ' && line[i + 1] == ' ') {
			break;
		}
		if (line[i] == ' ' && line[0] != ' ') {
			g++;
		}
		if (g > 0 && r > 0)
			break;
		i++;
	}
	tab[r] = '\0';
	return (i);
}

void to_parse_next_argument_sub(char *line, char *tab,
				char *array_2, char **tabu_2, char **envp)
{
	int n = 1;
	int q = 1;
	int r;

	for (int u = 0;array_2[u] != '\0';u++) {
		if (array_2[u] != ' ') {
			r = 0;
			tabu_2[q] =
				malloc(sizeof(char) * (my_strlen(envp[q]) + 1));
			while (array_2[u] != ' ') {
				if (array_2[u] == '\0')
					break;
				tabu_2[n][r] = array_2[u];
				r++;
				u++;
			}
			q++;
			n++;
		}
	}
}

void to_parse_next_argument(int i, char *line, char *tab,
			    char *array_2, char **tabu_2, char **envp)
{
	int r = 0;

	i++;
	while (line[i] != '\0') {
		array_2[r] = line[i];
		r++;
		i++;
	}
	array_2[r] = '\0';
	tabu_2[0] = tab;
	to_parse_next_argument_sub(line, tab,
				   array_2, tabu_2, envp);
}

static bool to_process_son_return(int i,
			      char *array_opt,
			      char **envp, char *tab)
{
	array_opt = to_path(envp, array_opt, tab);
	if (i == 8) {
		return (1);
	}
	return (0);
}

int to_process_son(char *line, char **envp,
		   char *array_opt, char **tabu_2, char *tab)
{
	int status = 0;
	pid_t cpid = fork();
	int n = 0;
	int i = 0;

	if (cpid > 0) {
		status = 0;
		waitpid(-1, &status, 0);
	}
	else if (cpid == 0) {
		i = 0;
		while (n = execve(array_opt, tabu_2, envp)) {
			if (n == -1) {
				if (to_process_son_return(i, array_opt,
							  envp, tab) == 1)
					return (1);
				i++;
			}
		}
	}
}
