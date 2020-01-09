/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** header mysh
*/

#ifndef MYSH_H_
#define MYSH_H_

#include <stdbool.h>
#include "include/my_minishell_1.h"

typedef struct minishell_variable_t minishell_variable_t;
struct minishell_variable_t {
	bool main_loop_verify;
	bool main_loop_verify_exit;
	bool check_cd_dash;
	char *array_cd_dash_1;
	char *array_cd_dash_2;
};

char* mysh(char **envp, char **av, minishell_variable_t minishell_variable);
char *to_path(char **envp, char *array_opt, char *line);
void to_array_2d(char **envp, char **test_2);
void to_setenv(char *line, char **test_2);
void to_build_in(char *line, char *new_line, char **envp, char **av);
int to_parse_first_argument(char *line, char *tab, int i);
void to_parse_next_argument(int i, char *line, char *tab,
			    char *array_2, char **tabu_2, char **envp);
void to_parse_next_argument_sub(char *line, char *tab,
				char *array_2, char **tabu_2, char **envp);
int to_process_son(char *line, char **envp,
		   char *array_opt, char **tabu_2, char *tab);
void to_path_sub_part_1(char *array, char **envp, char **test, char *buff);
int to_path_sub_part_2(char *array, char *array_opt, int f);
void to_path_sub_part_3(char *buff, char *line);
int mysh_cond_part_2(char *line, char **envp, char **av, int i,
		     minishell_variable_t *minishell_variable);
int mysh_cond_part_1(char *line, char **envp, char **av, int i,
		     minishell_variable_t *minishell_variable);
void mysh_sub_cond_part_3(char **test_2, char **av, char **envp,
			  minishell_variable_t *minishell_variable);
int mysh_cond_part_3(char *line, char **envp, char **av, char **test_2, int i,
		     minishell_variable_t *minishell_variable);
void home_made_command_env(char *new_line, char *line,
			   char **envp, char **av, char **test_2,
			   minishell_variable_t *minishell_variable);
void home_made_command_exit(char *new_line, char **envp, char **av,
			    minishell_variable_t *minishell_variable);
void home_made_commands_cd(char *new_line,
			   char *new_line_one_param,
			   parsing_m1_variables_t *parsing_m1_variables,
			   char **envp, char **av,
			   minishell_variable_t *minishell_variable);

#endif /* MYSH_H_ */
