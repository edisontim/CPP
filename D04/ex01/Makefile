CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -Wshadow -Wno-shadow
SRCS	= main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp
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
