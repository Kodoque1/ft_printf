NAME := libftprintf.a
LIBFT_PATH ?= ../libft
SRC :=  ft_handler_hexa.c ft_handler.c ft_hexa.c ft_printf.c
OBJ  := $(SRC:.c=.o)
TEST := Test
MAKEFLAGS += -r
RM := rm -f
CC := cc
AR = ar rcs
CFLAGS := -Werror -Wextra -Wall
CFLAGS += -Iincludes -I$(LIBFT_PATH)/includes

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


