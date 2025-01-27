# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 17:12:24 by jdel-val          #+#    #+#              #
#    Updated: 2024/10/09 20:45:19 by jdel-val         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c

# String functions

SRC +=	ft_strlen.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strdup.c\
		ft_itoa.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_strtrim.c\
		ft_split.c

# Character functions

SRC +=	ft_atoi.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_tolower.c\
		ft_toupper.c

# File descriptor functions

SRC +=	ft_putstr_fd.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c

# Memory allocation functions

SRC +=	ft_calloc.c

# Linked list functions

SRC +=	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstmap.c\
		ft_lstiter.c

# Needed for printf

SRC +=	ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putptr_hex.c\
		ft_put_un_nbr.c\
		ft_put_hex.c\
		ft_printf.c

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
