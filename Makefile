NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 

MSRCS = ft_printf.c		\
		ft_isflag.c		\
		ft_isvalidtype.c\
		ft_printc.c		\
		ft_putchar.c	\
		ft_uatoi.c		\
		ft_prints.c		\
		ft_putstr.c		\
		ft_strlen.c		\
		ft_putaddress.c	\
		ft_printp.c		\
		ft_putnbr.c		\
		ft_printid.c	\
		ft_nbrlen.c		\
		ft_printx.c		\
		ft_puthex.c		\
		ft_hexlen.c		\

BSRCS = ft_putcharflags_bonus.c \
		ft_passflag_bonus.c		\
		ft_putsflags_bonus.c	\
		ft_putadrflags_bonus.c	\
		ft_putnbrflags_bonus.c	\
		ft_putnbrflags2_bonus.c	\
		ft_puthexflags_bonus.c	\
		ft_puthexflags2_bonus.c

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

.PHONY: all bonus clean fclean re