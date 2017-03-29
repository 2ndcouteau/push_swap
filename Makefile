#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acouliba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/12 11:46:25 by acouliba          #+#    #+#              #
#    Updated: 2015/04/21 08:23:39 by qrosa            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC:=./srcs/main.c\
./srcs/push_swap.c\
./srcs/ft_cmp_tab.c\
./srcs/ft_ischnumber.c\
./srcs/ft_create_dnew.c\
./srcs/ft_check_intm.c\
./srcs/ft_remove_elem.c\
./srcs/ft_send_elem.c\
./srcs/ft_push_back.c\
./srcs/ft_push_front.c\
./srcs/ft_boucle_pile.c\
./srcs/ps_initialisation.c\
./srcs/ps_check_options.c\
./srcs/ps_error_init.c\
./srcs/ps_sx_swap_x.c\
./srcs/ps_rx_rotate_x.c\
./srcs/ps_px_push_x.c\
./srcs/ps_rrx_reverse_rotate_x.c\
./srcs/ps_sa.c\
./srcs/ps_sb.c\
./srcs/ps_ss.c\
./srcs/ps_ra.c\
./srcs/ps_rb.c\
./srcs/ps_rr.c\
./srcs/ps_rra.c\
./srcs/ps_rrb.c\
./srcs/ps_rrr.c\
./srcs/ps_pa.c\
./srcs/ps_pb.c\
./srcs/ps_move_ra.c\
./srcs/ps_move_rra.c\
./srcs/ps_check_order.c\
./srcs/ps_check_nbmin.c\
./srcs/ps_check_position.c\
./srcs/ps_sort_three.c\
./srcs/ps_sort_back.c\
./srcs/ps_sort_little.c\
./srcs/ps_print_error.c\
./srcs/ps_print_pile.c\
./srcs/ps_print_pets.c\
./srcs/ps_print_reverse_pile.c\
./srcs/ps_print_v_options.c\
./srcs/ps_print_r_options.c

OBJ=$(SRC:.c=.o)

# Lib includes
INC=-I ./includes/
LIBFT=libft/libft.a
LIB=-L ./libft/ -lft

# Options can be changed
CFLAGS:=-Wall -Wextra -Werror
CC:=gcc
NAME:=push_swap

# Sweet colors just for swag :)

RED=\033[0;31m
BLUE=\033[1;34m
CYAN=\033[0;36m
ORANGE=\033[0;33m
GREEN=\033[1;32m
NC=\033[0m

all:$(LIBFT) $(NAME)

$(LIBFT):
	@make -C libft

$(NAME): $(OBJ)
	@echo "${BLUE}--Linking $(NAME)${NC}"
	@$(CC) $(OBJ) $(CFALGS) -o $(NAME) $(INC) $(LIB)

%.o: %.c
	@echo "${CYAN}Compiling $^ into $@ ${NC}";
	@$(CC) -c $^ -o $@ $(CFLAGS) $(INC)

clean:
	@make clean -C libft
	@echo "${ORANGE}--Delete push_swap/libft OBJS OK ${NC}";
	@rm -f $(OBJ)

fclean: clean
	@echo "${RED}--Remove $(LIBFT)${NC}"
	@rm -f $(LIBFT)
	@echo "${RED}--Remove $(NAME)${NC}"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
