NAME	=	megaphone

CFLAGS	=	-Wall -Wextra -Werror

FILES	=	megaphone.cpp

CC		=	c++

FtoO	=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME):	$(FtoO)
	$(CC) $(CFLAGS) $(FtoO) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(FtoO)

fclean: clean
	$(RM) $(NAME) $(FtoO)

re: fclean $(NAME)

.PHONY: all clean fclean re