# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 23:01:55 by aburnott          #+#    #+#              #
#    Updated: 2022/09/28 23:17:50 by aburnott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/parsing.c srcs/utils.c srcs/verif.c srcs/ft_split.c srcs/ft_atoi.c srcs/tab_convert.c srcs/solve.c srcs/ft_init_tab.c

NAME = bsq

OBJ = $(SRCS:.c=.o)

HEAD = includes/

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) main.c $(SRCS) -I $(HEAD) -o $(NAME)

clean:
	rm -f $(OBJ)