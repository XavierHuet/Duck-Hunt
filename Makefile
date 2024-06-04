##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC_TESTS	=	\

LIB		=	lib/my/my_putchar.c		\
			lib/my/my_putstr.c		\
			lib/my/my_put_nbr.c		\
			lib/my/my_strcmp.c		\
			lib/my/my_strlen.c		\
			lib/my/my_printf.c		\
			lib/my/my_putnbr_base.c	\
			lib/my/my_float.c		\
			lib/my/type.c			\
			lib/my/function.c		\
			lib/my/my_scient.c		\
			lib/my/my_scient_maj.c	\
			lib/my/function_2.c		\
			lib/my/bob_hunter.c		\
			lib/my/my_strdup.c		\
			lib/my/my_strto_word_array.c\
			lib/my/window.c			\
			lib/my/window_2.c		\
			lib/my/window_3.c		\
			lib/my/window_4			\
			lib/my/winfow_5.c


MAIN		=		src/main.c
NAME		=		libmy.a
TEST_BIN	=		unit_tests
LOCAL_BIN	=		my_hunter
CSFML		=		-l csfml-graphics -l csfml-window -l csfml-system
ERROR		=		-Wall -Werror -Wextra


all:
	make -C lib/my
	gcc -o $(LOCAL_BIN) $(MAIN) $(CSFML) $(ERROR) -Iinclude -Llib/my -lmy

$(NAME):
	make -C lib/my

unit_tests: re
	gcc -o $(TEST_BIN) -I include $(LIB) $(SRC_TESTS) --coverage -lcriterion

tests_run: unit_tests

clean:
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *~
	rm -rf *#
	make clean -C lib/my

fclean: clean
	rm -rf $(TEST_BIN)
	rm -rf $(LOCAL_BIN)
	make fclean -C lib/my

re: fclean all

run_local: re
	gcc -o $(LOCAL_BIN) $(MAIN) -Iinclude -Llib/my -lmy

gcovr_branch:
	gcovr -b --exclude tests/

gcovr:
	gcovr --exclude tests/
