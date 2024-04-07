NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 

MSRCS = ft_printf.c		\
		ft_putaddress.c \
		ft_putchar.c 	\
		ft_putnbr.c 	\
		ft_putstr.c 	\
		ft_putuint.c 	\
		ft_puthex.c		\
		ft_strrchr.c	\

BSRCS = ft_uatoi_bonus.c		\
		ft_nbrflags_bonus.c		\
		ft_addressflags_bonus.c	\
		ft_nbrflags_bonus2.c	\

MOBJS = $(MSRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: $(NAME)

$(NAME): $(MOBJS) $(BOBJS)
	ar rc $(NAME) $(MOBJS) $(BOBJS)
	ranlib $(NAME)

bonus: $(NAME) $(BOBJS)
	ar rc $(NAME) $(BOBJS)
	ranlib $(NAME)

clean:
	$(RM) $(MOBJS) $(BOBJS)

fclean:	clean
	$(RM) $(NAME)
	
re: fclean all