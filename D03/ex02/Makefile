CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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
