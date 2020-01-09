/*
** EPITECH PROJECT, 2018
** header
** File description:
** files that contain all the defines and the prototype of the libmy library
*/

#define SIZE 500
#include <stdarg.h>
#ifndef MY_H_
#define MY_H_
#endif /*MY_H_*/

struct info_param
{
	int length;
	char *str;
	char *copy;
	char *word_array;
};

typedef struct check_return_t check_return_t;
struct check_return_t {
	int inspect;
	char *contain_line;
};

void my_putchar(char c);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int nb);
int my_is_prime(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *srcn, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_get_line(const int fd, check_return_t *check_return);
char *put_in_stdin(char *buffer, int val, check_return_t *check_return);
