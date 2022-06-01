CC = c++
NAME = replace
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): *.cpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

dev: *.cpp
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

test: re
	@echo "Running test!"
	@echo "8sudsufo8asizdgfasudw48uzagsudzauosgfhksud\nsudo8azgislfhjdoiu\nsudo8azgislfhjdoiu\nsudo8azgislfhjdoiu" >> testfile
	@./replace testfile sud HHH
	@sed 's/sud/HHH/g' testfile > controlfile
	@echo "If this is the last line printed, the test was successful."
	$(shell diff controlfile testfile.replace > output)
	@rm testfile
	@rm testfile.replace
	@rm controlfile
	@cat output
	@rm output
	@rm replace

random_test: re
	@echo "Running test!"
	openssl rand -hex 2000 > testfile
	@./replace testfile aaa HHH
	@sed 's/aaa/HHH/g' testfile > controlfile
	@echo "OK"
	$(shell diff controlfile testfile.replace > output)
	@cat output
	@echo "If the last line says OK test was successful."
	@rm testfile
	@rm replace
	@rm controlfile
	@rm output
	@rm testfile.replace
	
random_big_test: re
	@echo "Running test!"
	openssl rand -hex 200000 > testfile
	@./replace testfile 12 HHH
	@sed 's/12/HHH/g' testfile > controlfile
	@echo "OK"
	$(shell diff controlfile testfile.replace > output)
	@cat output
	@echo "If the last line says OK test was successful."
	@rm testfile
	@rm replace
	@rm controlfile
	@rm output
	@rm testfile.replace
	
re: fclean $(NAME)

.ONESHELL: