/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 22:24:54 by atouati           #+#    #+#             */
/*   Updated: 2022/05/23 23:39:20 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	int		len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		fd = open(av[1], O_RDONLY);
		if (ft_strcmp(av[1] + len - 4, ".ber") != 0)
		{
			write(1, "the map is not ending with: [.ber]\n", 35);
			return (0);
		}
		so_long(fd);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
