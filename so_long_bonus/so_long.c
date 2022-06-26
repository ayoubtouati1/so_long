/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:31:46 by atouati           #+#    #+#             */
/*   Updated: 2022/06/24 02:10:00 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

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

int	put_enemy(t_struct *ptr, int a)
{
	ptr->p = 0;
	ptr->l = 0;
	while (ptr->str[ptr->p])
	{
		if (ptr->str[ptr->p][ptr->l] == 'X'
			&& (ptr->str[ptr->p][ptr->l + a] != '1'
			&& ptr->str[ptr->p][ptr->l + a] != 'C'
			&& ptr->str[ptr->p][ptr->l + a] != 'X'
			&& ptr->str[ptr->p][ptr->l + a] != 'E'))
		{
			if (ptr->str[ptr->p][ptr->l + a] == 'P')
				exit_funtion();
			put_enemy_animation(ptr, a);
			ptr->l++;
		}
		if (ptr->str[ptr->p][ptr->l] == '\0')
		{
			ptr->p++;
			ptr->l = 0;
		}
		ptr->l++;
	}
	return (check_enemy_position(ptr, a));
}

int	animation(t_struct *ptr)
{
	static int	i;
	static int	a;

	if (i == MIN && a != 0)
	{
		a = put_enemy(ptr, 1);
	}
	else if (i == MED && a == 0)
	{
		a = put_enemy(ptr, -1);
	}
	if (i == MAX)
	{
		put_super_enemy(ptr);
		i = 0;
	}
	else if (i > MAX)
		i = 0;
	i++;
	return (0);
}

int	create_new_evant(t_struct *ptr)
{
	ptr->m = 0;
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
	mlx_loop_hook(ptr->mlx, animation, ptr);
	mlx_hook(ptr->win, 17, 0L, mouse_hook, (void *)0);
	mlx_key_hook(ptr->win, key_hook, ptr);
	return (0);
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
	ptr.len = j;
	put_image(&ptr);
	create_new_evant(&ptr);
	mlx_loop(ptr.mlx);
}
