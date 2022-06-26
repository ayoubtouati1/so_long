/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:39:56 by atouati           #+#    #+#             */
/*   Updated: 2022/06/24 02:11:47 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
# include "mlx.h"
# include <fcntl.h>
# include <unistd.h>
# include"get_next_line/get_next_line.h"

# define MAX 15000
# define MED 10000
# define MIN 5000

typedef struct s_struct {
	int		height;
	int		width;
	void	*mlx;
	void	*win;
	void	*img;
	int		y;
	int		x;
	int		z;
	int		a;
	int		m;
	int		b;
	int		v;
	int		len;
	int		l;
	int		p;
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
void	ft_putnbr_fd(int n, int fd);
void	free_array(char **str);
char	*ft_itoa(int n);
void	move_conter(t_struct *param);
void	door_status(t_struct *param);
int		ft_strcmp(const char *s1, const char *s2);
void	put_enemy_animation(t_struct *ptr, int a);
int		check_enemy_position(t_struct *ptr, int a);
void	remove_enemy_prev(t_struct *ptr, int i, int k);
void	remove_enemy(t_struct *ptr, int i, int k);
void	remove_player_right_left(t_struct *ptr, int a);
void	remove_player_up_down(t_struct *ptr, int a);
void	exit_funtion(void);
void	put_sprites_image(t_struct *ptr, char *str, int i, int x);
void	put_super_enemy(t_struct *ptr);

#endif 