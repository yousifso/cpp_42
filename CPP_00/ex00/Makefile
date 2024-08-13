# Variables
NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Targets
all: $(NAME)

$(NAME) : megaphone.o
	$(CXX) $(CXXFLAGS) -o $(NAME) megaphone.o

megaphone.o: megaphone.cpp
	$(CXX) $(CXXFLAGS) -c megaphone.cpp

clean:
	rm -f megaphone.o

fclean: clean
	rm -f $(NAME)

re: fclean all