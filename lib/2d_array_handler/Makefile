##
## EPITECH PROJECT, 2022
## 2D Array Handler
## File description:
## Makefile
##

CFLAGS = -W -Wall -Werror -Wextra

CPPFLAGS = -Iinclude

SRC	= $(wildcard *.c)

OBJ = $(SRC:.c=.o)

LIB	= lib2darrhandl.a

.PHONY: all $(LIB) tests_run clean fclean re

all: $(LIB)

$(LIB): $(OBJ)
	$(CC) -c $(OBJ)
	ar src $(LIB) $(OBJ)
	cp $(LIB) ..

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(LIB) ../$(LIB)
