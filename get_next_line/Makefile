NAME = get_next_line

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -D BUFFER_SIZE=42

RM = rm -f 

SRC = get_next_line.c get_next_line_utils.c main.c

OBJS = ${SRC:.c=.o}


all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) $(SRC)
	
clean	: 
	$(RM) $(OBJS) 

fclean	: clean
	$(RM) $(NAME) 

re		: fclean all
