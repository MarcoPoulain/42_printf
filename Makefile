NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft/ -I printers/

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c \
	  extract_glyph.c \
	  dispatch.c \
	  printers/cast_char.c
OBJ := $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(LIBFT_DIR)
	ar rc $(NAME) $(OBJ) $(LIBFT)
	ranlib $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

test:
	@$(CC) $(CFLAGS) tests/test_$(TEST) $(SRC) -o run_test
	./run_test

.PHONY: all clean fclean re test
