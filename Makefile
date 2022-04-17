# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akajitam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 13:08:57 by akajitam          #+#    #+#              #
#    Updated: 2022/04/17 15:16:33 by akajitam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_strlen.c

OBJS = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all
	

