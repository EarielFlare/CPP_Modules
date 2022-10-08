SRCS		= main.cpp Zombie.cpp zombieHorde.cpp
OBJS		= $(SRCS:.cpp=.o)
CC			= c++
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= Zombies

.PHONY:		all clean fclean re
all:		$(NAME)
$(NAME):	$(OBJS) Zombie.hpp
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean $(NAME)
