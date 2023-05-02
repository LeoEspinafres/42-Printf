NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = 	ft_putchar.c \
		ft_printf.c \
		ft_putstr.c \
		ft_smallhexadecimal.c \
		ft_bighexadecimal.c \
		ft_putnbr.c \
		ft_putaddress.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: 
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re 