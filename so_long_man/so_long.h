/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:39:56 by atouati           #+#    #+#             */
/*   Updated: 2022/05/25 17:06:58 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "mlx.h"
# include <fcntl.h>
# include <unistd.h>
# include"get_next_line/get_next_line.h"

typedef struct s_struct {
	int		height;
	int		width;
	void	*mlx;
	void	*win;
	void	*img;
	int		y;
	int		x;
	int		m;
	char	**str;
}	t_struct;

size_t	ft_strlen(const char *s);
char	**join_lines(char **lines, char *line);
int		strcmp(const char *s1, const char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		checkmap(char **str);
void	put_image(t_struct *ptr);
char	*ft_strdup(const char *s1);
void	move_player_image_right(t_struct *param);
void	move_player_image_left(t_struct *param);
void	move_player_image_up(t_struct *param);
void	move_player_image_down(t_struct *param);
void	move_player(int key, t_struct *param);
int		check_num_of_treasure(char **str);
void	so_long(int fd);
int		ft_width_len(char **str);
int		key_hook(int key, t_struct *param);
int		mouse_hook(int mouse);
void	move_player_right(t_struct *param);
void	move_player_left(t_struct *param);
void	move_player_up(t_struct *param);
void	move_player_down(t_struct *param);
void	put_ground_image(t_struct *ptr, int i, int x);
void	put_wall_image(t_struct *ptr, int i, int x);
void	put_exit_image(t_struct *ptr, int i, int x);
void	put_treasure_image(t_struct *ptr, int i, int x);
void	put_player_image(t_struct *ptr, int i, int x);
void	ft_putnbr_fd(int n, int fd);
void	free_array(char **str);
int		ft_strcmp(const char *s1, const char *s2);

#endif 