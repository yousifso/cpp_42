# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygurma <ygurma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 13:18:55 by ygurma            #+#    #+#              #
#    Updated: 2024/07/09 13:19:30 by ygurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Targets
all: $(NAME)

$(NAME): main.o PhoneBook.o Contact.o
	$(CXX) $(CXXFLAGS) -o $(NAME) main.o PhoneBook.o Contact.o

main.o: main.cpp PhoneBook.hpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

PhoneBook.o: PhoneBook.cpp PhoneBook.hpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c PhoneBook.cpp

Contact.o: Contact.cpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c Contact.cpp

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all