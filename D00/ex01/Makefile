CC 				= clang++
CFLAGS			= -Wall -Wextra -Werror


SRCS			= my_awesome_phonebook.cpp Contact.cpp Phonebook.cpp


INC				= my_awesome_phonebook.hpp Contact.hpp Phonebook.hpp


OBJ				= ${SRCS:.cpp=.o}


NAME			= my_awesome_phonebook


all		: $(NAME)


$(NAME)	: $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean	: 
			rm -rf $(OBJ)


fclean	:	clean
				rm -rf $(NAME)


re		: fclean all


.PHONY	: all clean re