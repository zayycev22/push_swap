cmake_minimum_required(VERSION 3.21)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap push_swap.h push_swap.c source/sorting/ft_sorting.c source/checks/check_dups.c source/ft_atoi.c source/stacks/ft_lists.c source/push/pushs.c source/rotates/rot.c source/rotates/reverse_rotates.c source/sorting/main_sorting.c source/swaps/ft_swaps.c source/ft_lst_size.c source/sorting/huge_elems.c source/stacks/ft_get_max.c)
