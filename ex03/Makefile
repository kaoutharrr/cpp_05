# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 20:12:05 by kkouaz            #+#    #+#              #
#    Updated: 2023/11/25 18:28:42 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM  = rm -rf
SRC = main.cpp AForm.cpp  Intern.cpp Bureaucrat.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp 
OBJ = $(SRC:.cpp=.o)

all :  $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all  