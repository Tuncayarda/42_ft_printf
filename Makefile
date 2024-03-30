NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 

SRCS = 	ft_printf.c		\
		ft_putaddress.c \
		ft_putchar.c 	\
		ft_putnbr.c 	\
		ft_putstr.c 	\
		ft_putuint.c 	\
		ft_puthex.c		\

OBJS = $(SRCS:.c=.o)

.c.o:
	cc ${FLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	
re: fclean all