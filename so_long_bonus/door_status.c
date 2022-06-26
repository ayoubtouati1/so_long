/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door_status.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:25:20 by atouati           #+#    #+#             */
/*   Updated: 2022/05/26 18:50:34 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

void	cordination_of_door(t_struct *param)
{
	param->z = 0;
	param->a = 0;
	while (param->str[param->a])
	{
		if (param->str[param->a][param->z] == 'E')
			break ;
		if (param->str[param->a][param->z] == '\0')
		{
			param->z = 0;
			param->a++;
		}
		param->z++;
	}
}

void	door_status(t_struct *param)
{
	cordination_of_door(param);
	put_sprites_image(param, "./images/glow.xpm", param->a, param->z);
	put_sprites_image(param, "./images/door_opne.xpm", param->a, param->z);
}
