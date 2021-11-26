NAME = libftprintf.a
SRCS = f*.c
OBJS = f*.o
all:
	gcc  -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	gcc main.c $(NAME)
fclean :
	rm -rf *.o $(NAME)
