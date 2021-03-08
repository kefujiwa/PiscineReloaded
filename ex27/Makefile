# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kefujiwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/28 17:58:04 by kefujiwa          #+#    #+#              #
#    Updated: 2020/04/16 23:51:52 by kenshi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM		= rm -f

all:	ft_display_file

ft_display_file: display_file.o
		gcc -Wall -Wextra -Werror -o ft_display_file display_file.o

display_file.o: display_file.c
		gcc -c display_file.c

clean:
		${RM} display_file.o

fclean: clean
		${RM} ft_display_file

re: fclean all

.PHONY: all clean fclean re
