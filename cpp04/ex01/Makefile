# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apommier <apommier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 02:04:13 by apommier          #+#    #+#              #
#    Updated: 2022/07/18 20:52:38 by apommier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
SRCS	= main.cpp\
			Cat.cpp\
			Dog.cpp\
			Animal.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\
			Brain.cpp\
			
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