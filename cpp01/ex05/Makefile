# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apommier <apommier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 22:05:40 by apommier          #+#    #+#              #
#    Updated: 2022/07/18 20:52:38 by apommier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
SRCS	= main.cpp\
			Harl.cpp
		
			
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