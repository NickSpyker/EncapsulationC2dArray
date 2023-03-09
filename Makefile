##
## EPITECH PROJECT, 2022
## Array 2d Handler
## File description:
## Makefile
##

CFLAGS = -W -Wall -Werror -Wextra

CPPFLAGS = -Iinclude

SRC = main.c

OBJ = $(SRC:.c=.o)

NAME = test_arr2d

.PHONY: all $(NAME) clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/array_2d_handler
	$(CC) $(OBJ) -o $(NAME) -Llib -larr2d

clean:
	make clean -C lib/array_2d_handler
	$(RM) $(OBJ) *.gcno *.gcda

fclean: clean
	make fclean -C lib/array_2d_handler
	$(RM) $(NAME) unit_test

re: fclean all
