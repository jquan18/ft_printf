SRC = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putuint.c
GCC = gcc -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)
LIBFT = ./LIBFT/libft.a
NAME = libftprintf.a

.c.o:
	$(GCC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) | libft
	ar rcs $(NAME) $(OBJS) $(LIBFT)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft

libft:
	$(MAKE) -C LIBFT
