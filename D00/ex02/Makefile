CC 				= clang++
CFLAGS			= -Wall -Wextra -Werror


SRCS			= tests.cpp account.cpp 


INC				= Account.hpp


OBJ				= ${SRCS:.cpp=.o}


NAME			= tests


all		: $(NAME)


$(NAME)	: $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean	: 
			rm -rf $(OBJ)


fclean	:	clean
				rm -rf $(NAME)


re		: fclean all


.PHONY	: all clean re