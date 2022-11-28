# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 10:10:12 by het-tale          #+#    #+#              #
#    Updated: 2022/11/28 17:47:12 by het-tale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    form

SRCS    =    main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp

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