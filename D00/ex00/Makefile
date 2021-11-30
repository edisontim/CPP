CC 		= clang++
CFLAGS	= -Wall -Wextra -Werror
SRCS	= megaphone.cpp
NAME	= megaphone
OBJ		= ${SRCS:.cpp=.o}

all		: $(NAME)

$(NAME)	: $(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ)


clean	: 
			rm -rf $(OBJ)

fclean	:	clean
				rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean re