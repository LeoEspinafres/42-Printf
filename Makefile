NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = 	ft_putchar.c \
		ft_whileloop.c \
		ft_putstr.c

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