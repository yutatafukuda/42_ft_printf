NAME = libftprintf.a

SRCS = ft_printf.c		\
		ft_putchar.c		\
		ft_putstr.c		\
		ft_putpointer.c		\
		ft_putnbr_int.c		\
		ft_putnbr_unsigned_int.c	\
		ft_small_x.c	\
		ft_large_x.c		\



OBJS = $(SRCS:%.c=%.o)

CC   = cc

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean	all

.PHONY:		all clean fclean re

