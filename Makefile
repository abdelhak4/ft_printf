NAME = libftprintf.a
SRCS = $(shell find . -name "f*.c")
OBJS = $(SRCS:.c=.o)
all:
	gcc  -c -g $(SRCS)
	ar rc $(NAME) $(OBJS)
	gcc main.c $(NAME)
fclean :
	rm -rf *.o $(NAME)
