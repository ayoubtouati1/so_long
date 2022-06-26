# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atouati <atouati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/15 21:33:16 by atouati           #+#    #+#              #
#    Updated: 2022/05/26 18:54:24 by atouati          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_BONUS	= main_bonus.c so_long.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c checkmap.c \
			join_lines.c put_image.c move_image_player.c \
			move_player.c width_len.c hook.c move_playe_direction.c put_image_sprits.c \
			util.c free_array.c move_conter.c door_status.c util_2.c \
			put_enemy_animation.c remove_sprits.c

CC	= cc
RM	= rm -f
NAME_BONUS = so_long_bonus

CFLAGS	= -Wall -Werror -Wextra -lmlx -framework OpenGL -framework AppKit -D BUFFER_SIZE=4

all:  ${NAME_BONUS}
${NAME_BONUS}: ${SRCS_BONUS}
	${CC} ${CFLAGS} ${SRCS_BONUS} -o ${NAME_BONUS}

clean:

fclean: clean
	${RM} ${NAME_BONUS}

re: fclean all
