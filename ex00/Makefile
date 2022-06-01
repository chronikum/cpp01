CC = c++
NAME = zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp randomChump.cpp Zombie.cpp newZombie.cpp

all: $(NAME)

$(NAME): *.cpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

dev: *.cpp
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
