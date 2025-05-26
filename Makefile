NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft/ -I printers/

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c
OBJ := $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) .
	ar rc $(NAME) $(OBJ) libft.a
	ranlib $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME) libft.a

re: fclean all

.PHONY: all clean fclean re
