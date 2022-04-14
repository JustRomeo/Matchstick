##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## My_Sokoban
##

SRCF = src/

SRC =	$(SRCF)main.c			\
		$(SRCF)bot.c			\
		$(SRCF)error.c			\
		$(SRCF)map.c			\
		$(SRCF)playing.c		\
		$(SRCF)print.c			\
		$(SRCF)remove.c			\
		$(SRCF)tools_remove.c	\

SRCC =

OBJ =	$(SRC:.c=.o)
OBJC =	$(SRCC:.c=.o)

NAME =	matchstick
CRITERION = unit_tests

CFLAGS = -I./include -L./lib/my -lmy
CUR = -lncurses
CRIT = --coverage -lcriterion
WALL = -Wall -Wextra -Werror

VALGRIND = -g3

ARGUMENTS = 5 3

all:	$(NAME)

$(NAME):	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $(CFLAGS)
			rm -f $(OBJ)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a

exe:		$(NAME)
			clear
			./$(NAME) $(ARGUMENTS)

valgrind:	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CUR) $(VALGRIND)
			rm -f $(OBJ)
			valgrind ./$(NAME) $(ARGUMENTS)

clean:
	rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../lib/my/libmy.a
		rm -f lib/my/libmy.a

re: fclean all

error:		$(NAME)
			clear
			./$(NAME) maps/errormap

tests_run:	$(OBJC)
			make -C ./lib/my
			gcc -o $(CRITERION) $(OBJC) $(CFLAGS) $(CUR) $(CRIT)
			rm -f $(OBJC)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a
			./$(CRITERION)
