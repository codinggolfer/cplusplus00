NAME	=	Megaphone

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

FILES	=	megaphone.cpp

CC		=	g++

FtoO	=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME):	$(FtoO)
	$(CC) $(CFLAGS) $(FtoO) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(FtoO)

fclean: clean
	$(RM) $(NAME) $(FtoO)

re: fclean $(NAME)

.PHONY: all clean fclean re