SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
CC			= c++
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= Replace

.PHONY:		all clean fclean re
all:		$(NAME)
$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean $(NAME)
