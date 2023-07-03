##
## EPITECH PROJECT, 2022
## Makefile CSFML
## File description:
## Makefile CSFML
##

SRC	=	src/game/sprite.c	\
		src/game/window.c	\
		src/event.c	\
		src/main.c	\
		src/game_description.c	\
		src/cursor.c	\
		src/divers.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CC = cc -g

CFLAGS = -I./include -Wall -Wextra -Werror

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
