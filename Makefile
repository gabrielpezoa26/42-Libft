# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 12:32:25 by gcesar-n          #+#    #+#              #
#    Updated: 2024/10/29 12:46:05 by gcesar-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= cc
CFLAGS:= -Wall -Wextra -Werror
NAME:= libft.a
HDR:= libft.h

SRC_FILES:= ft_isalpha.c \
						ft_isdigit.c \
						ft_isalnum.c \
						ft_isascii.c \
						ft_isprint.c \
						ft_strlen.c \
						ft_memset.c \
						ft_bzero.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_strlcpy.c \
						ft_strlcat.c \
						ft_toupper.c \
						ft_tolower.c \
						ft_strchr.c \
						ft_strrchr.c \
						ft_strncmp.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_strnstr.c \
						ft_atoi.c \
						ft_strdup.c \
						ft_calloc.c \
						ft_itoa.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c \
						ft_strjoin.c \
						ft_substr.c \
						ft_strmapi.c \
						ft_striteri.c \
						ft_strtrim.c \
						ft_split.c

OBJ_FILES := $(SRC_FILES:.c=.o)

%.o: %.c $(HDR)
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
		ar rcs $@ $^

all: $(NAME)

clean:
		rm -f $(OBJ_FILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
