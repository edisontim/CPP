CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -Wshadow -Wno-shadow
SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= tests

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -rf $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean re
