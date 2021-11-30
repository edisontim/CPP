CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
SRCS	= main.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= string_test

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -rf $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean re
