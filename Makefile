# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jogalera <jogalera@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 20:00:41 by jogalera          #+#    #+#              #
#    Updated: 2023/11/08 10:55:15 by jogalera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = libft.h
SRCS = ft_isalpha.c ft_memcmp.c  ft_strdup.c  ft_strncmp.c ft_tolower.c \
ft_atoi.c    ft_isascii.c ft_memcpy.c  ft_strnstr.c ft_toupper.c \
ft_bzero.c   ft_isdigit.c ft_memmove.c ft_strrchr.c  \
ft_calloc.c  ft_isprint.c ft_memset.c	 ft_strtrim.c	ft_strlcat.c \
ft_isalnum.c ft_memchr.c  ft_strchr.c  ft_strlen.c	ft_strlcpy.c \
ft_split.c	 ft_itoa.c	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = ${SRCS:.c=.o}

OBJS_ALL = $(OBJS) 

CC = cc
CFLAGS = -Wall -Werror -Wextra

%.o:%c	${OBJS}
	${CC} -c ${CFLAGS} -I ${INCLUDES} ${SRCS}

$(NAME): ${OBJS} $(INCLUDES) Makefile
	ar rc ${NAME} ${OBJS}

all:    ${NAME}

clean:
	rm -f $(OBJS_ALL)

fclean: clean
	rm -f $(NAME)

re:	fclean all
