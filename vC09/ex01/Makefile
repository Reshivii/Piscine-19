# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 00:16:31 by aburnott          #+#    #+#              #
#    Updated: 2022/09/27 13:33:40 by aburnott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
 
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJ = $(SRCS:.c=.o)

HEAD = includes/

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

.c.o:
		cc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJ) 

fclean: clean 
		rm -f $(NAME)

re :	fclean $(NAME) 

.PHONY: all clean fclean re
