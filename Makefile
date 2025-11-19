NAME := libftprintf.a
LIBFT := libft.a
SRC :=  ft_handler_hexa.c ft_handler.c ft_hexa.c ft_printf.c
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

$(NAME): $(LIBFT) $(OBJ)
	$(AR) $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	cd Libft; make; mv $(LIBFT) ..

# === CLEANING UP ===
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re:	fclean all


