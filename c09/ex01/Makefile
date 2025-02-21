NAME = libft.a
SRC = srcs
SRCS = $(SRC)/ft_putchar.c \
       $(SRC)/ft_swap.c \
       $(SRC)/ft_putstr.c \
       $(SRC)/ft_strlen.c \
       $(SRC)/ft_strcmp.c
CC = gcc
OBJS = $(SRCS:.c=.o)
ARCHIVE = ar -rcs 
FLAGS = -Wall -Werror -Wextra
INCLUDE = includes
HEADERS = $(INCLUDE)/ft.h
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCHIVE) $(NAME) $(OBJS)

%.o: %.c
	$(CC) -I $(INCLUDE) $(FLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
