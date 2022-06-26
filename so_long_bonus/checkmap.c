/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:51:42 by atouati           #+#    #+#             */
/*   Updated: 2022/06/25 01:22:41 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

int	check_char(char **str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i])
	{
		x = 0;
		while (str[i][x] == '1' || str[i][x] == '0' ||
			str[i][x] == 'E' || str[i][x] == 'P' ||
			str[i][x] == 'C' || str[i][x] == 'X')
		{
			x++;
		}
		if (str[i][x] == '\0')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	check_len(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_strlen(str[0]) != ft_strlen(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_if_closed(char **str)
{
	int	i;
	int	len;

	i = 0;
	while (str[0][i] != '\0')
	{
		if (str[0][i] != '1')
			return (0);
		i++;
	}
	len = i;
	i = 0;
	while (str[i])
	{
		if (str[i][0] != '1' || str[i][len - 1] != '1')
			return (0);
		i++;
	}
	if (strcmp(str[0], str[i - 1]) != 0)
		return (0);
	return (1);
}

int	check_content_of_map(char **str, int chr)
{
	int	i;
	int	x;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		x = 0;
		while (str[i][x])
		{
			if (str[i][x] == chr)
				j++;
			x++;
		}
		if (str[i][x] == '\0')
			i++;
	}
	if (j < 1)
		return (0);
	return (j);
}

int	checkmap(char **str)
{
	if (str[0] == NULL)
	{
		write(1, "There is no map\n", 16);
		exit (0);
	}
	if ((check_content_of_map(str, 'E') == 0)
		|| (check_content_of_map(str, 'C') == 0)
		|| (check_content_of_map(str, 'P') == 0))
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	if ((check_content_of_map(str, 'P') > 1
			|| check_content_of_map(str, 'E') > 1)
		|| (check_if_closed(str) == 0)
		|| (check_len(str) == 0) || (check_char(str) == 0))
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	return (1);
}
