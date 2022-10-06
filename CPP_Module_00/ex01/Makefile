# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 22:48:29 by cgregory          #+#    #+#              #
#    Updated: 2022/09/25 14:49:19 by cgregory         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Contact.cpp PhoneBook.cpp
OBJS			= $(SRCS:.cpp=.o)
CC				= clang++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98
NAME			= phonebook

.PHONY:			all clean fclean re
all:			$(NAME)
$(NAME):		$(OBJS) Contact.hpp PhoneBook.hpp
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
