NAME = brain
CXX = c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SOURCES := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJECTS := $(SOURCES:.cpp=.o)

target asan: CXXFLAGS += -fsanitize=address,undefined -g

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
asan: re

.PHONY: all re clean fclean asan
