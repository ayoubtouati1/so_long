/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image_sprits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 22:16:10 by atouati           #+#    #+#             */
/*   Updated: 2022/05/12 22:24:43 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	put_ground_image(t_struct *ptr, int i, int x)
{
	ptr->img = mlx_xpm_file_to_image(ptr->mlx,
			"./images/glow.xpm", &ptr->height, &ptr->width);
	mlx_put_image_to_window(ptr->mlx, ptr->win,
		ptr->img, x * 75, i * 75);
}

void	put_wall_image(t_struct *ptr, int i, int x)
{
	ptr->img = mlx_xpm_file_to_image(ptr->mlx,
			"./images/TilesetTest.xpm", &ptr->height, &ptr->width);
	mlx_put_image_to_window(ptr->mlx, ptr->win,
		ptr->img, x * 75, i * 75);
}

void	put_exit_image(t_struct *ptr, int i, int x)
{
	ptr->img = mlx_xpm_file_to_image(ptr->mlx,
			"./images/assets.xpm", &ptr->height, &ptr->width);
	mlx_put_image_to_window(ptr->mlx, ptr->win,
		ptr->img, x * 75, i * 75);
}

void	put_treasure_image(t_struct *ptr, int i, int x)
{
	ptr->img = mlx_xpm_file_to_image(ptr->mlx,
			"./images/treasurechest.xpm", &ptr->height,
			&ptr->width);
	mlx_put_image_to_window(ptr->mlx, ptr->win,
		ptr->img, x * 75, i * 75);
}

void	put_player_image(t_struct *ptr, int i, int x)
{
	ptr->img = mlx_xpm_file_to_image(ptr->mlx,
			"./images/luffy-png.xpm", &ptr->height, &ptr->width);
	mlx_put_image_to_window(ptr->mlx, ptr->win,
		ptr->img, x * 75, i * 75);
}
