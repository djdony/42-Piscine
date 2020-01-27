# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/26 12:49:59 by dyusuf            #+#    #+#              #
#    Updated: 2020/01/26 21:17:34 by dyusuf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=eval_expr
SRCS=srcs/*.c

all:
	@gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) -g

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
