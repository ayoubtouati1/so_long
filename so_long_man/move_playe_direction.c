/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_playe_direction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:27:21 by atouati           #+#    #+#             */
/*   Updated: 2022/06/21 03:01:49 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	move_player_right(t_struct *param)
{
	if (param->str[param->y][param->x + 1] != 'E')
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_right(param);
		param->x++;
	}
	else if (param->str[param->y][param->x + 1] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_right(param);
		write(1, "you finish the game ;)", 22);
		exit (0);
	}
}

void	move_player_left(t_struct *param)
{
	if (param->str[param->y][param->x - 1] != 'E')
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_left(param);
		param->x--;
	}
	else if (param->str[param->y][param->x - 1] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_left(param);
		write(1, "you finish the game ;)", 22);
		exit (0);
	}
}

void	move_player_up(t_struct *param)
{
	if (param->str[param->y - 1][param->x] != 'E')
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_up(param);
		param->y--;
	}
	else if (param->str[param->y - 1][param->x] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_up(param);
		write(1, "you finish the game ;)", 22);
		exit (0);
	}
}

void	move_player_down(t_struct *param)
{
	if (param->str[param->y + 1][param->x] != 'E')
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_down(param);
		param->y++;
	}
	else if (param->str[param->y + 1][param->x] == 'E'
		&& check_num_of_treasure(param->str) == 0)
	{
		param->m++;
		ft_putnbr_fd(param->m, 1);
		write(1, " move\n", 6);
		move_player_image_down(param);
		write(1, "you finish the game ;)", 22);
		exit (0);
	}
}
