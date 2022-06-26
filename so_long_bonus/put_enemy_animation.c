/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_enemy_animation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:16:32 by atouati           #+#    #+#             */
/*   Updated: 2022/06/25 01:13:19 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	num_of_enemy(t_struct *ptr)
{
	int	i;

	i = 0;
	ptr->p = 0;
	ptr->l = 0;
	while (ptr->str[ptr->p])
	{
		if (ptr->str[ptr->p][ptr->l] == 'X')
			i++;
		if (ptr->str[ptr->p][ptr->l] == '\0')
		{
			ptr->p++;
			ptr->l = 0;
		}
		ptr->l++;
	}
	return (i);
}

int	check_enemy(t_struct *ptr)
{
	int	i;

	i = 0;
	ptr->p = 0;
	ptr->l = 0;
	while (ptr->str[ptr->p])
	{
		if (ptr->str[ptr->p][ptr->l] == 'X'
			&& (ptr->str[ptr->p][ptr->l + 1] == '1'
			|| ptr->str[ptr->p][ptr->l + 1] == 'C'
			|| ptr->str[ptr->p][ptr->l + 1] == 'X'
			|| ptr->str[ptr->p][ptr->l + 1] == 'E'))
			i++;
		if (ptr->str[ptr->p][ptr->l] == '\0')
		{
			ptr->p++;
			ptr->l = 0;
		}
		ptr->l++;
	}
	return (i);
}

int	check_enemy_prev(t_struct *ptr)
{
	int	i;

	i = 0;
	ptr->p = 0;
	ptr->l = 0;
	while (ptr->str[ptr->p])
	{
		if (ptr->str[ptr->p][ptr->l] == 'X'
			&& (ptr->str[ptr->p][ptr->l - 1] == '1'
			|| ptr->str[ptr->p][ptr->l - 1] == 'C'
			|| ptr->str[ptr->p][ptr->l - 1] == 'X'
			|| ptr->str[ptr->p][ptr->l - 1] == 'E'))
			i++;
		if (ptr->str[ptr->p][ptr->l] == '\0')
		{
			ptr->p++;
			ptr->l = 0;
		}
		ptr->l++;
	}
	return (i);
}

void	put_enemy_animation(t_struct *ptr, int a)
{
	put_sprites_image(ptr, "./images/glow.xpm", ptr->p, ptr->l);
	if (a > 0)
	{
		put_sprites_image(ptr, "./images/kaido_left.xpm", ptr->p, ptr->l + a);
		remove_enemy(ptr, ptr->p, ptr->l);
	}
	if (a < 0)
	{
		put_sprites_image(ptr, "./images/kaido_right.xpm", ptr->p, ptr->l - 1);
		remove_enemy_prev(ptr, ptr->p, ptr->l);
	}
}

int	check_enemy_position(t_struct *ptr, int a)
{
	if (a > 0)
	{
		if (check_enemy(ptr) == num_of_enemy(ptr))
			return (0);
		else
			return (1);
	}
	if (a < 0)
	{
		if (check_enemy_prev(ptr) == num_of_enemy(ptr))
			return (1);
		else
			return (0);
	}
	return (0);
}
