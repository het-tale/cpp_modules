# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 10:10:12 by het-tale          #+#    #+#              #
#    Updated: 2022/12/05 09:51:33 by het-tale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    identify

SRCS    =    main.cpp Base.cpp

OBJCT    =    ${SRCS:.cpp=.o}

FLAGS    =    -Wall -Wextra -Werror

RM        =    rm -f

CC        =    c++

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) -std=c++98

clean :
	${RM} ${OBJCT}

fclean : clean
	${RM} ${NAME}

re : fclean all