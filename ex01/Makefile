
NAME = brainz

GREEN = \033[0;32m
RESET = \033[0m

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS =	main.cpp \
		zombieHorde.cpp \
		Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)COMPILING DONE!!...$(RESET)"

clean:
	$(RM) $(OBJS)
	@echo "$(GREEN)Cleanup Files Objs...$(RESET)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(GREEN)CLEANUP DONE!!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
