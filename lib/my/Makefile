##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC		=	my_putchar.c			\
			my_putstr.c				\
			my_put_nbr.c			\
			my_strcmp.c				\
			my_strlen.c				\
			my_strcpy.c				\
			my_printf.c				\
			my_putnbr_base.c		\
			type.c                  \
			function.c              \
			function_2.c			\
			my_scient.c				\
			my_scient_maj.c			\
			my_float.c				\
			bob_my_hunter.c			\
			my_strdup.c				\
			my_strto_word_array.c	\
			window.c				\
			window_2.c				\
			window_3.c				\
			window_4.c				\
			window_5.c

OBJ		=	$(SRC:.c=.o)

NAME	=		libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp hunter.h ../../include/
	cp $(NAME) ../../

clean:
	rm -rf *~
	rm -rf *#
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf ../../$(NAME)

re: fclean all
