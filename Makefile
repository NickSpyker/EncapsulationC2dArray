##
## EPITECH PROJECT, 2022
## 2D Array Handler
## File description:
## Makefile
##

CFLAGS = -W -Wall -Werror -Wextra

CPPFLAGS = -Iinclude

TESTS = .

SRC = main.c

OBJ = $(SRC:.c=.o)

NAME = test_2d_array_handler

.PHONY: all $(NAME) tests_run clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/2d_array_handler
	$(CC) $(OBJ) -o $(NAME) -Llib -l2darrhandl

tests_run: fclean
	make -C lib/2d_array_handler
	$(CC) $(TESTS) -o unit_test -Llib -l2darrhandl --coverage -lcriterion
	./unit_test

clean:
	make clean -C lib/2d_array_handler
	$(RM) $(OBJ) *.gcno *.gcda

fclean: clean
	make fclean -C lib/2d_array_handler
	$(RM) $(NAME) unit_test $(shell find ./ -type f -name "*.a")

re: fclean all
