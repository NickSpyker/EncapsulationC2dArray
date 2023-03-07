##
## EPITECH PROJECT, 2022
## Array 2d Handler
## File description:
## Makefile
##

CFLAGS = -W -Wall -Wextra

SRC	=	arr2d.c \
		getter.c \
		result.c \
		setter.c \
		tools.c

OBJ =	$(SRC:.c=.o)

LIB	= 	libarr2d.a

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
