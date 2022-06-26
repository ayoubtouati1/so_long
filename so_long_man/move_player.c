/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:16:00 by atouati           #+#    #+#             */
/*   Updated: 2022/05/14 22:43:46 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	move_player(int key, t_struct *param)
{
	if (key == 2 && param->str[param->y][param->x + 1] != '1')
		move_player_right(param);
	else if (key == 0 && param->str[param->y][param->x - 1] != '1')
		move_player_left(param);
	else if (key == 13 && param->str[param->y - 1][param->x] != '1')
		move_player_up(param);
	else if (key == 1 && param->str[param->y + 1][param->x] != '1')
		move_player_down(param);
	else if (key == 53)
	{
		write(1, "You haven't finished the game\n", 31);
		exit (1);
	}
}
