NAME	=	Account

CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -g

FILES	=	tests.cpp Account.cpp

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