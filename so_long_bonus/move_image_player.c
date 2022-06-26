/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_image_player.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:23:00 by atouati           #+#    #+#             */
/*   Updated: 2022/05/15 20:34:43 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	move_player_image_right(t_struct *param)
{
	t_struct	ptr;
	t_struct	img;

	ptr.win = param->win;
	ptr.mlx = param->mlx;
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, (param->x + 1) * 75, param->y * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/luffy-png.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, (param->x + 1) * 75, param->y * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, param->y * 75);
}

void	move_player_image_left(t_struct *param)
{
	t_struct	ptr;
	t_struct	img;

	ptr.win = param->win;
	ptr.mlx = param->mlx;
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, (param->x - 1) * 75, param->y * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/luffy_left.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, (param->x - 1) * 75, param->y * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, param->y * 75);
}

void	move_player_image_up(t_struct *param)
{
	t_struct	ptr;
	t_struct	img;

	ptr.win = param->win;
	ptr.mlx = param->mlx;
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, (param->y - 1) * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/luffy-png.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, (param->y - 1) * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, param->y * 75);
}

void	move_player_image_down(t_struct *param)
{
	t_struct	ptr;
	t_struct	img;

	ptr.win = param->win;
	ptr.mlx = param->mlx;
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, (param->y + 1) * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/luffy-png.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, (param->y + 1) * 75);
	ptr.img = mlx_xpm_file_to_image(ptr.mlx,
			"./images/glow.xpm", &img.height, &img.width);
	mlx_put_image_to_window(ptr.mlx, ptr.win,
		ptr.img, param->x * 75, param->y * 75);
}
