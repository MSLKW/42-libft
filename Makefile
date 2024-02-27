CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = libft.h

testmake: ft_atoi.o ft_isdigit.o ft_atoi.test.o
	$(CC) -o testmake ft_atoi.o ft_isdigit.o ft_atoi.test.o