/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib
*/

void to_print_array(int line , int column, char arrary[line][column]);
int open_file(char *name_file, int *val);
void put_in(char *buffer, int val);
char *read_to_param(char **av, char *buffer);
char *read_to(char *array);
int count_line(char *buffer);
int count_column(char *buffer);
void to_print_2d_array(int y, int x, char array[y][x]);
void to_2d_given_param(char *buffer, int line, int column, char array[line][column]);
