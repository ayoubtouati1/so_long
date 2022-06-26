/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_conter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:17:17 by atouati           #+#    #+#             */
/*   Updated: 2022/05/26 18:56:09 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_conter(t_struct *param)
{
	char	*str;
	char	*move;
	int		cont;
	int		i;

	cont = param->len;
	i = 0;
	move = ft_itoa(param->m);
	str = ft_strjoin(move, " move\n");
	free(move);
	while (cont--)
	{
		put_sprites_image(param, "./images/TilesetTest.xpm", 0, i);
		i++;
	}
	mlx_string_put(param->mlx, param->win, 30, 30, 0x00FF0000, str);
	free(str);
}
