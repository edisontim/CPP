CXX		= clang++
CXXFLAGS	= -Wall -Werror -Wextra -Wshadow -Wno-shadow
SRCS	= scalar_conversion.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= convert

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -rf $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all fclean re
