NAME := libftprintf.a
SRC :=  ft_handler.c ft_handler_hexa.c ft_hexa.c ft_itoa.c ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_uitoa.c ft_calloc.c ft_bzero.c ft_memset.c
OBJ  := $(SRC:.c=.o)
TEST := Test
MAKEFLAGS += -r

RM := rm -f
CC := cc
AR = ar rcs
CFLAGS := -Werror -Wextra -Wall

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# === CLEANING UP ===
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re:	fclean all


