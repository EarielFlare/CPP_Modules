SRCS		= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS		= $(SRCS:.cpp=.o)
CC			= c++
RM			= rm -f
СFLAGS		= -Wall -Wextra -Werror -std=c++98 #-Wshadow -Wno-shadow
NAME		= Brain

.PHONY:		all clean fclean re
all:		$(NAME)
$(NAME):	$(OBJS) Animal.hpp Dog.hpp Cat.hpp Brain.hpp
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean $(NAME)
