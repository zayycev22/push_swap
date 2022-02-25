NAME = push_swap

SRC = push_swap.c\
		source/checks/check_dups.c\
		source/push/pushs.c\
		source/rotates/reverse_rotates.c\
		source/rotates/rot.c\
		source/sorting/ft_sorting.c\
		source/sorting/huge_elems.c\
		source/sorting/main_sorting.c\
		source/stacks/ft_get_max.c\
		source/stacks/ft_lists.c\
		source/swaps/ft_swaps.c\
		source/ft_atoi.c\
		source/ft_lst_size.c\

OBJ = $(SRC:.c=.o)

HDRS = push_swap.h

CC = gcc

FLAGS = -g -Wall -Wextra -Werror

RM = rm -f

$(NAME): $(HDRS) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean
