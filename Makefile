NAME = pipex

CC = gcc

FLAG = -Werror -Wall -Wextra 

RM = rm -rf

SRC = pipex.c\
		pipex_utils.c\
		libft/libft.a

$(NAME) :
		make all -C libft
		$(CC) $(SRC) -o $(NAME) $(FLAG)

all : $(NAME)

clean :
		make clean -C libft

fclean :
		make fclean -C libft
		$(RM) $(NAME)
re : fclean all
