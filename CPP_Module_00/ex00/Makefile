# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 22:13:37 by cgregory          #+#    #+#              #
#    Updated: 2022/09/24 22:31:09 by cgregory         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)
CC				= clang++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98
NAME			= megaphone

.PHONY:			all clean fclean re test
all:			$(NAME)
$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
test:			$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone
