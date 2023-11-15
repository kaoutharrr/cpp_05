# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 22:35:53 by kkouaz            #+#    #+#              #
#    Updated: 2023/11/15 22:49:56 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp Bureaucrat.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	(CXX)(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
	(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

