flags = -Wall -Wextra -Werror -std=c++98

name=Now_we’re_talking

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