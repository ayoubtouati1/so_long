/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:19:52 by atouati           #+#    #+#             */
/*   Updated: 2022/06/25 01:13:58 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	put_next_image(t_struct *ptr, int i, int x)
{
	if (ptr->str[i][x] == 'C')
		put_sprites_image(ptr, "./images/treasurechest.xpm", i, x);
	else if (ptr->str[i][x] == 'P')
		put_sprites_image(ptr, "./images/luffy-png.xpm", i, x);
	else if (ptr->str[i][x] == 'X')
		put_sprites_image(ptr, "./images/kaido_left.xpm", i, x);
}

void	put_image(t_struct *ptr)
{
	int			i;
	int			x;

	mlx_new_image(ptr->mlx, 75, 75);
	i = 0;
	x = 0;
	while (ptr->str[i] != NULL)
	{
		while (ptr->str[i][x])
		{
			put_sprites_image(ptr, "./images/glow.xpm", i, x);
			if (ptr->str[i][x] == '1')
				put_sprites_image(ptr, "./images/TilesetTest.xpm", i, x);
			else if (ptr->str[i][x] == 'E')
				put_sprites_image(ptr, "./images/door_close.xpm", i, x);
			else
				put_next_image(ptr, i, x);
			x++;
		}
		x = 0;
		i++;
	}
}
