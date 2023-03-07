##
## EPITECH PROJECT, 2022
## Array 2d Handler
## File description:
## Makefile
##

CFLAGS = -W -Wall -Werror -Wextra

CPPFLAGS = -Iinclude

TESTS = .

SRC = main.c

OBJ = $(SRC:.c=.o)

NAME = test_arr2d

.PHONY: all $(NAME) tests_run clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/array_2d_handler
	$(CC) $(OBJ) -o $(NAME) -Llib -larr2d

tests_run: fclean
	make -C lib/array_2d_handler
	$(CC) $(TESTS) -o unit_test -lcriterion -Llib -larr2d
	./unit_test

clean:
	make clean -C lib/array_2d_handler
	$(RM) $(OBJ) *.gcno *.gcda

fclean: clean
	make fclean -C lib/array_2d_handler
	$(RM) $(NAME) unit_test

re: fclean all
