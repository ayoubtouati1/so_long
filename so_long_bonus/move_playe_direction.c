/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_playe_direction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:27:21 by atouati           #+#    #+#             */
/*   Updated: 2022/06/25 01:18:40 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	move_player_right(t_struct *param)
{
	if (param->str[param->y][param->x + 1] != 'E')
	{
		param->m++;
		move_conter(param);
		if (param->str[param->y][param->x + 1] == 'X')
		{
			write(1, "you lost :(\n", 13);
			move_player_image_right(param);
			exit (0);
		}
		remove_player_right_left(param, 1);
		move_player_image_right(param);
		param->x++;
	}
	else if (param->str[param->y][param->x + 1] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		move_conter(param);
		move_player_image_right(param);
		write(1, "you finish the game ;)\n", 23);
		exit (0);
	}
	if (check_num_of_treasure(param->str) == 0)
		door_status(param);
}

void	move_player_left(t_struct *param)
{
	if (param->str[param->y][param->x - 1] != 'E')
	{
		param->m++;
		move_conter(param);
		if (param->str[param->y][param->x - 1] == 'X')
		{
			write(1, "you lost :(\n", 13);
			move_player_image_left(param);
			exit (0);
		}
		remove_player_right_left(param, -1);
		move_player_image_left(param);
		param->x--;
	}
	else if (param->str[param->y][param->x - 1] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		move_conter(param);
		move_player_image_left(param);
		write(1, "you finish the game ;)\n", 23);
		exit (0);
	}
	if (check_num_of_treasure(param->str) == 0)
		door_status(param);
}

void	move_player_up(t_struct *param)
{
	if (param->str[param->y - 1][param->x] != 'E')
	{
		param->m++;
		move_conter(param);
		if (param->str[param->y - 1][param->x] == 'X')
		{
			write(1, "you lost :(\n", 13);
			move_player_image_up(param);
			exit (0);
		}
		remove_player_up_down(param, -1);
		move_player_image_up(param);
		param->y--;
	}
	else if (param->str[param->y - 1][param->x] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		move_conter(param);
		move_player_image_up(param);
		write(1, "you finish the game ;)\n", 23);
		exit (0);
	}
	if (check_num_of_treasure(param->str) == 0)
		door_status(param);
}

void	move_player_down(t_struct *param)
{
	if (param->str[param->y + 1][param->x] != 'E')
	{
		param->m++;
		move_conter(param);
		if (param->str[param->y + 1][param->x] == 'X')
		{
			write(1, "you lost :(\n", 13);
			move_player_image_down(param);
			exit (0);
		}
		remove_player_up_down(param, 1);
		move_player_image_down(param);
		param->y++;
	}
	else if (param->str[param->y + 1][param->x] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		move_conter(param);
		move_player_image_down(param);
		write(1, "you finish the game ;)\n", 23);
		exit (0);
	}
	if (check_num_of_treasure(param->str) == 0)
		door_status(param);
}
