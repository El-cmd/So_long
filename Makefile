# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 03:16:44 by vlothlinux        #+#    #+#              #
#    Updated: 2022/01/11 17:38:44 by vlothlinux       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=  gcc
CFLAGS	= -Wall -Werror -Wextra -c 
NAME	= so_long
SRC		= so_long.c \
		  srcs/can_move.c \
		  srcs/count_c.c \
		  srcs/find_P.c \
		  srcs/ft_split.c \
		  srcs/get_next_line.c \
		  srcs/hakai.c \
		  srcs/init_img.c \
		  srcs/init.c \
		  srcs/mlx_img.c \
		  srcs/p_p_down.c \
		  srcs/p_p_left.c \
		  srcs/p_p_right.c \
		  srcs/p_p_up.c \
		  srcs/put_all.c \
		  srcs/put_exit.c \
		  srcs/put_N1.c \
		  srcs/put_n2.c \
		  srcs/put_pokeball.c \
		  srcs/put_red.c \
		  srcs/put_sol.c \
		  srcs/put_wall.c \
		  srcs/ft_strlen.c \
		  srcs/ft_move.c \
		  srcs/check_map.c \
		  srcs/ft_putnbr_fd \
		  srcs/ft_put_put.c \
		  srcs/read_map.c 

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		make -C mlx
		$(CC) $(OBJ) -o $(NAME) mlx/libmlx_Linux.a -lX11 -lXext

%.o: %.c
	$(CC) $(CFLAGS) -D BUFFER_SIZE=1000 -o $@ $< -g

bonus: all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	make clean -C mlx

re: fclean all