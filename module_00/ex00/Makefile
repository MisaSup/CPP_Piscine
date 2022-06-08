NAME = megaphone

LIST_C = megaphone.cpp

OBJ_C = ${patsubst %.c, %.o, ${LIST_C}}

FLAGS = -Wall -Wextra -Werror -lstdc++ -std=c++98

all : ${NAME}
	@echo "<<<< DONE ! >>>>"

${NAME} : ${OBJ_C} 
	@gcc -o ${NAME} ${FLAGS} ${PTHREAD} ${OBJ_C}

%.o : %.c 
	@gcc ${FLAGS} -c $< -o $@

clean :
	@rm -rf ${OBJ_C} 
	@echo "object files was deleted"

fclean : clean
	@rm -f ${NAME}
	@echo "${NAME} was deleted"

re : fclean all

.PHONY : all clean fclean re 