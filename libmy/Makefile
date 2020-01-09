##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##

AR = ar rc

RM = rm -f

SRCS =	my_isneg.c \
	my_revstr.c \
	my_strcpy.c \
	my_strlowcase.c \
	my_is_prime.c \
	my_showmem.c \
	my_str_isalpha.c \
	my_strncat.c \
	my_compute_power_rec.c \
	my_putchar.c \
	my_showstr.c \
	my_str_islower.c \
	my_strncmp.c \
	my_sort_int_array.c \
	my_str_isnum.c \
	my_strncpy.c \
	my_compute_square_root.c \
	my_put_nbr.c \
	my_strcapitalize.c \
	my_str_isprintable.c \
	my_strstr.c \
	my_find_prime_sup.c \
	my_putstr.c \
	my_strcat.c \
	my_str_isupper.c \
	my_strupcase.c \
	my_getnbr.c \
	my_strcmp.c \
	my_strlen.c \
	my_swap.c \
	my_get_line.c \
	put_buffer_stdin.c \
	my_printf/my_put_nbr_flag_u.c \
	my_printf/my_printf_condition_content_part1_and_part2.c \
	my_printf/decimal_to_octal_man_ascii.c \
	my_printf/decimal_to_binary.c  \
	my_printf/decimal_to_hexadecimal.c \
	my_printf/decimal_to_hexadecimal_for_flag_p.c \
	my_printf/decimal_to_hexadecimal_conditions_for_flag_p.c \
	my_printf/decimal_to_octal_condition.c \
	my_printf/decimal_to_hexadecimal_conditions.c \
	my_printf/decimal_to_octal.c \
	my_printf/my_printf.c \
	my_printf/my_printf_condition_part1.c \
	my_printf/my_printf_condition_part2.c \
	sokoban_lib/count_column.c \
	sokoban_lib/count_line.c \
	sokoban_lib/read.c \
	sokoban_lib/to_2d_given_param.c \
	sokoban_lib/to_print_2d_array.c \
	minishell_lib/parse_minishell_1.c \
	minishell_lib/parse_minishell_1_next.c \
	matchstick_lib/draw_first_columns_lines.c \

OBJS = $(SRCS:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

rm:
	$(RM)$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all fclean clean re
