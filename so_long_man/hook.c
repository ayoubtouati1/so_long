/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:17:42 by atouati           #+#    #+#             */
/*   Updated: 2022/05/15 14:06:23 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

char	**remove_treasure(char **str, int i, int j)
{
	str[i][j] = '0';
	return (str);
}

int	mouse_hook(int mouse)
{
	if (mouse == 0)
	{
		write(1, "You haven't finished the game\n", 31);
		exit (0);
	}
	return (0);
}

int	key_hook(int key, t_struct *param)
{
	if (param->str[param->y][param->x] == 'C')
		param->str = remove_treasure(param->str, param->y, param->x);
	move_player(key, param);
	return (0);
}
