/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image_sprits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 22:16:10 by atouati           #+#    #+#             */
/*   Updated: 2022/06/25 01:06:34 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	put_sprites_image(t_struct *ptr, char *str, int i, int x)
{
	ptr->img = mlx_xpm_file_to_image(ptr->mlx,
			str, &ptr->height, &ptr->width);
	mlx_put_image_to_window(ptr->mlx, ptr->win,
		ptr->img, x * 75, i * 75);
}

void	put_super_enemy(t_struct *ptr)
{
	int	p;
	int	l;

	p = 0;
	l = 0;
	while (ptr->str[p])
	{
		if (ptr->str[p][l] == 'X')
		{
			put_sprites_image(ptr, "./images/glow.xpm", p, l);
			put_sprites_image(ptr, "./images/kaido_suber.xpm", p, l);
		}
		if (ptr->str[p][l] == '\0')
		{
			p++;
			l = 0;
		}
		l++;
	}
}
