# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 21:35:58 by dmodrzej          #+#    #+#              #
#    Updated: 2024/11/09 21:51:27 by dmodrzej         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = zombie

sources = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

objects = $(sources:.cpp=.o)

all: $(name)

$(name): $(objects)
	c++ -Wall -Wextra -Werror -std=c++98 $(objects) -o $(name)

%.o: %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm $(objects)

fclean: clean
	rm $(name)

re: fclean all

.PHONY: all clean fclean re