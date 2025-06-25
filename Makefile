NAME=libftprintf.a

SRCS := ft_printf.c ft_putchar.c
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS) 
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	cc -g -Wall -Werror -Wextra -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY: all clean fclean re
