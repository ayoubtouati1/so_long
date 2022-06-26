/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:19:52 by atouati           #+#    #+#             */
/*   Updated: 2022/05/15 14:13:36 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

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
			put_ground_image(ptr, i, x);
			if (ptr->str[i][x] == '1')
				put_wall_image(ptr, i, x);
			else if (ptr->str[i][x] == 'E')
				put_exit_image(ptr, i, x);
			else if (ptr->str[i][x] == 'C')
				put_treasure_image(ptr, i, x);
			else if (ptr->str[i][x] == 'P')
				put_player_image(ptr, i, x);
			x++;
		}
		x = 0;
		i++;
	}
}
