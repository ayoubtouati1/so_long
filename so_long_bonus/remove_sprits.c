/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_sprits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:28:41 by atouati           #+#    #+#             */
/*   Updated: 2022/05/26 15:51:29 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	remove_enemy_prev(t_struct *ptr, int i, int k)
{
	ptr->str[i][k] = '0';
	ptr->str[i][k - 1] = 'X';
}

void	remove_enemy(t_struct *ptr, int i, int k)
{
	ptr->str[i][k] = '0';
	ptr->str[i][k + 1] = 'X';
}

void	remove_player_right_left(t_struct *ptr, int a)
{
	ptr->str[ptr->y][ptr->x] = '0';
	ptr->str[ptr->y][ptr->x + a] = 'P';
}

void	remove_player_up_down(t_struct *ptr, int a)
{
	ptr->str[ptr->y][ptr->x] = '0';
	ptr->str[ptr->y + a][ptr->x] = 'P';
}

void	exit_funtion(void)
{
	write(1, "you lost :(\n", 13);
	exit (0);
}
