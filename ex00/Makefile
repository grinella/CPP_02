flags = -Wall -Wextra -Werror -std=c++98

name=My_First_Class_in_Orthodox_Canonical_Form

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