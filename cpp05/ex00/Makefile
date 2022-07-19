# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apommier <apommier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 21:34:54 by apommier          #+#    #+#              #
#    Updated: 2022/07/19 10:52:12 by apommier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
SRCS	= main.cpp\
			Bureaucrat.cpp
			
OBJS	= ${SRCS:.cpp=.o}
CC		= c++
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

.cpp.o:
		$(CC) ${CFLAGS} -c $< -o $(<:.cpp=.o)

${NAME}: ${OBJS}
		${CC} ${LIB} ${OBJS} -o ${NAME} 

all:	${NAME}

clean:
		@${RM} ${OBJS}

fclean:	clean
		@${RM} ${NAME}

re: 	fclean all

.PHONY: all clean fclean re