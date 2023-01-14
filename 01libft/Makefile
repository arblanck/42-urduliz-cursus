# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arblanco <arblanco@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 12:57:49 by arblanco          #+#    #+#              #
#    Updated: 2022/12/11 12:14:43 by arblanco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a

SRC			=	$(shell find . -name "*.c")

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

AR			=	ar rcs

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@


all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@echo "Libft compiled!"

clean:
			@$(RM) $(OBJ)
			@echo "Libft objects files cleaned!"

fclean:		clean
			@$(RM) $(NAME)
			@echo "Libft executable files cleaned!"

re:			fclean all
			@echo "Cleaned and rebuilt everything for libft!"


.PHONY:		all clean fclean re
