NAME = phone_book

LIST_C = main.cpp

OBJ_C = ${patsubst %.cpp, %.o, ${LIST_C}}

HEADERS = PhoneBook.hpp Contact.hpp

FLAGS = -Wall -Wextra -Werror -lstdc++ -std=c++98

all : ${NAME}
	@echo "<<<< DONE ! >>>>"

${NAME} : ${OBJ_C} ${HEADERS}
	@gcc -o ${NAME} ${FLAGS} ${PTHREAD} ${OBJ_C}

%.o : %.cpp 
	@gcc ${FLAGS} -c $< -o $@

clean :
	@rm -rf ${OBJ_C} 
	@echo "object files was deleted"

fclean : clean
	@rm -f ${NAME}
	@echo "${NAME} was deleted"

re : fclean all

.PHONY : all clean fclean re 