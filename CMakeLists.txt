cmake_minimum_required(VERSION 3.21)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap push_swap.h push_swap.c  libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c  libft/ft_lstadd_front.c libft/ft_lstclear.c libft/ft_lstdelone.c libft/ft_lstiter.c sources/ft_lstlast.c libft/ft_lstmap.c libft/ft_lstnew.c sources/ft_stack_size.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c libft/libft.h
        stacks.c exit.c sources/ft_stack_add_back.c sources/ft_new_elem.c ft_number.c ft_sorting.c sources/ft_del_last.c sources/ft_algos.c sources/rotates/reverse.c sources/ft_stack_add_front.c)
