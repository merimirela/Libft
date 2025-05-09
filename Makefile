# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirela- <mmirela-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 15:46:20 by mmirela-          #+#    #+#              #
#    Updated: 2025/05/08 23:21:19 by mmirela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRC = \
	ft_isalpha.c \
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
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_SRC = \
	    ft_lstnew.c \
	    ft_lstadd_front.c \
	    ft_lstsize.c \
	    ft_lstlast.c \
	    ft_lstadd_back.c \
	    ft_lstdelone.c \
	    ft_lstclear.c \
	    ft_lstiter.c \
	    ft_lstmap.c 

OBJS = $(SRC:%.c=%.o)

BONUS_OBJS = $(BONUS_SRC:%.c=%.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

bonus : .bonus

.bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^
	touch .bonus

clean:
	$(RM) $(OBJS) $(BONUS_OBJS) .bonus

fclean: clean
	$(RM) $(NAME) $(BONUS_OBJS)

re: fclean all bonus

.PHONY: all clean fclean re bonus
