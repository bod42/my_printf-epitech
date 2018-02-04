##
## EPITECH PROJECT, 2017
## c code
## File description:
## pool
##

CC	=	gcc -W -Wall -Wextra

RM	=	rm -f

SRCS	=	./src/my_putchar.c	\
		./src/flag.c		\
		./src/my_putstr.c	\
		./src/my_put_nbr.c	\
		./src/my_strlen.c	\
		./src/putnbr_base.c	\
		./src/my_printf.c	\

OBJS	=	$(SRCS:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
