# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 13:50:13 by rboudwin          #+#    #+#              #
#    Updated: 2024/10/29 17:21:58 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= FragTrap
CFLAGS  := -Wextra -Wall -Werror -std=c++11
SRCS	:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@c++ $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean fclean all

.PHONY: all, clean, fclean, re