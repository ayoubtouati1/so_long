# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atouati <atouati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 19:13:44 by atouati           #+#    #+#              #
#    Updated: 2022/05/25 17:06:32 by atouati          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c so_long.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c checkmap.c \
			join_lines.c put_image.c move_image_player.c \
			move_player.c width_len.c hook.c move_playe_direction.c put_image_sprits.c util.c free_array.c \
			util_2.c

CC	= cc
RM	= rm -f
NAME = so_long

CFLAGS	= -Wall -Werror -Wextra -lmlx -framework OpenGL -framework AppKit -D BUFFER_SIZE=4

all: ${NAME}

${NAME}: ${SRCS} 
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:

fclean: clean
	${RM} ${NAME}

re: fclean all
