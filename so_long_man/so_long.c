/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:31:46 by atouati           #+#    #+#             */
/*   Updated: 2022/05/16 16:36:51 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	check_num_of_treasure(char **str)
{
	int	i;
	int	x;
	int	c;

	i = 0;
	x = 0;
	c = 0;
	while (str[i])
	{
		if (str[i][x] == 'C')
			c++;
		if (str[i][x] == '\0')
		{
			i++;
			x = 0;
		}
		x++;
	}
	return (c);
}

void	create_new_evant(t_struct *ptr)
{
	ptr->x = 0;
	ptr->y = 0;
	while (ptr->str[ptr->y])
	{
		if (ptr->str[ptr->y][ptr->x] == '\0')
		{
			ptr->y++;
			ptr->x = 0;
		}
		if (ptr->str[ptr->y][ptr->x] == 'P')
			break ;
		ptr->x++;
	}
	mlx_hook(ptr->win, 17, 0L, mouse_hook, (void *)0);
	mlx_key_hook(ptr->win, key_hook, ptr);
}

void	so_long(int fd)
{
	t_struct	ptr;
	int			i;
	int			j;
	char		*dest;

	j = 0;
	i = 0;
	ptr.str = (char **)malloc(1 * sizeof(char *));
	ptr.str[i] = NULL;
	while (1)
	{
		dest = get_next_line(fd);
		if (dest == NULL)
			break ;
		ptr.str = join_lines(ptr.str, dest);
	}
	checkmap(ptr.str);
	j = ft_strlen(ptr.str[i]);
	i = ft_width_len(ptr.str);
	ptr.mlx = mlx_init();
	ptr.win = mlx_new_window(ptr.mlx, j * 75, i * 75, "so_long");
	ptr.m = 0;
	put_image(&ptr);
	create_new_evant(&ptr);
	mlx_loop(ptr.mlx);
}
