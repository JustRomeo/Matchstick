##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Le Makefile de la lib
##

SRC =	my_binary.c	\
		my_getdouble.c	\
		my_getlong.c	\
		my_getnbr.c	\
		my_hexa.c	\
		my_octal.c	\
		my_printf.c	\
		my_putchar.c	\
		my_put_double.c	\
		my_put_float.c	\
		my_putint_in_str.c	\
		my_put_long.c	\
		my_put_nbr.c	\
		my_putpointer.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_sort_int_array.c	\
		my_strcat.c	\
		my_strlen.c	\
		my_strlowercase.c	\
		my_putspecstr.c	\
		get_next_line.c	\
		my_print_array.c	\
		my_str_to_array.c	\

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a
NAME2 = my.h

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			rm -f $(OBJ)

clean: 
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)

re: fclean all
