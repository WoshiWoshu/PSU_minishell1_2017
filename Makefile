##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##

CC = gcc -g3

FLAG = -I /include

RM = rm -f

SRC =	mysh_sub_part_2.c \
	mysh_sub.c \
	command_minishell_1.c \
	command_minishell_1_next.c \
	mysh.c \
	main.c \

OBJ = $(SRC:.c=.o)

NAME = mysh

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./libmy
	$(CC) $(OBJ) -o $(NAME) -L ./libmy -l my
clean:
	$(RM) $(OBJ)

fclean: clean
	make -C libmy fclean
	$(RM) $(NAME)

re: fclean all

.PHONY : all fclean clean re
