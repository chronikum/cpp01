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
	
random_test: re
	@echo "Running test!"
	openssl rand -hex 2000 > testfile
	sed 's/a/HHH/g' testfile > controlfile
	./replace testfile a HHH
	@echo "If an error occurs, the number is NOT zero:"
	@diff controlfile testfile.replace | wc -c
	@rm controlfile
	@rm testfile
	@rm testfile.replace
	
random_big_test: re
	@echo "Running test!"
	openssl rand -hex 200000 > basefile
	sed 's/3/\n/g' basefile > testfile
	sed 's/b/HHH/g' testfile > controlfile
	./replace testfile b HHH
	@echo "If an error occurs, the number is NOT zero:"
	@diff controlfile testfile.replace | wc -c
	@rm controlfile
	@rm testfile
	@rm basefile
	@rm testfile.replace
	
re: fclean $(NAME)