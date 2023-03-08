##
## EPITECH PROJECT, 2022
## Array 2d Handler
## File description:
## Makefile
##

CFLAGS = -W -Wall -Werror -Wextra -fPIC

SRC	=	arr2d.c \
		extractor.c \
		getter.c \
		result.c \
		setter.c \
		tools.c

OBJ =	$(SRC:.c=.o)

LIB	= 	libarr2d.a

.PHONY: all $(LIB) clean fclean

all: $(LIB)

$(LIB): $(OBJ)
	$(CC) -shared -o $(LIB) $(OBJ)
	cp $(LIB) ..

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(LIB) ../$(LIB)
