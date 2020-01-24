# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 11:30:17 by dyusuf            #+#    #+#              #
#    Updated: 2020/01/23 22:19:42 by dyusuf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_tail
SRCS=srcs/*.c

all:
	@gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean re
