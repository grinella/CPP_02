flags = -Wall -Wextra -Werror -std=c++98

name=Towards_a_more_useful_fixed-point_number_class

all:
	@clear
	@echo Sto creando gli oggetti...
	@c++ $(flags) *.cpp -o $(name)
	@sleep 0.2
	@echo Fatto ✓

fclean:
	@clear
	@echo Sto cancellando...
	@-rm -f $(name)
	@sleep 0.4
	@echo Fatto ✓

re: fclean all