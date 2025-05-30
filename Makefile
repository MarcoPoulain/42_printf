NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft/ -I printers/

LIBFT_DIR = libft

SRC = ft_printf.c \
	  extract_glyph.c \
	  dispatch.c \
	  printers/cast_char.c \
	  printers/cast_int.c \
	  printers/cast_string.c \
	  printers/cast_uint.c \
	  printers/cast_hex.c \
	  printers/cast_uphex.c \
	  printers/cast_ptr.c

OBJ := $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(LIBFT_DIR)
	ar rc $(NAME) $(OBJ) $(LIBFT_DIR)/*.o
	ranlib $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME) run_test

re: fclean all

test: $(NAME)
	@$(CC) $(CFLAGS) tests/test_$(TEST) $(NAME) -o run_test
	@./run_test

.PHONY: all clean fclean re test
