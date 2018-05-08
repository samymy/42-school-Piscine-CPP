#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 12:56:23 by vdubinki          #+#    #+#              #
#    Updated: 2017/10/02 12:56:24 by vdubinki         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

INC =

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ): $(INC)

.cpp.o:
	@clang++ $(FLAGS) -c $<

$(NAME): $(OBJ)
	@clang++ $(FLAGS) -o $@ $^

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
