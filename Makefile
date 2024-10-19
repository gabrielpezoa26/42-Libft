# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
#SRCS = $(wildcard *.c)
SRCS = $(filter-out ft_memmove.c, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "libft.a created"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "Library cleaned"

re: fclean all

.PHONY: all clean fclean re
