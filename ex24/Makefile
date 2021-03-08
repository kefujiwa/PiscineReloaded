# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kefujiwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/28 17:58:04 by kefujiwa          #+#    #+#              #
#    Updated: 2020/01/29 03:07:55 by kefujiwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/
CFILES	= ${SRCS}ft_putchar.c \
		  ${SRCS}ft_swap.c \
		  ${SRCS}ft_putstr.c \
		  ${SRCS}ft_strlen.c \
		  ${SRCS}ft_strcmp.c
OFILES	= ${CFILES:.c=.o}
NAME	= libft.a
LIBC	= ar -rc
RM		= rm -f

.c.o:
		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o} -Iincludes

${NAME}: ${OFILES}
	${LIBC} ${NAME} ${OFILES}

all:	${NAME}

clean:
		${RM} ${OFILES}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o
