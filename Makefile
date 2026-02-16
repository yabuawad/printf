CC = cc 
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a 
SRC = ft_puthex_low.c\
	ft_puthex_up.c \
	ft_putnbr.c \
	ft_printf.c \
	ft_putchar.c\
	ft_strlen.c \
	ft_putstr.c \
	ft_p.c \
	ft_u.c \
	ft_strdup.c

	
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re