/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouati <atouati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:35:28 by atouati           #+#    #+#             */
/*   Updated: 2022/05/15 20:35:11 by atouati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long_bonus.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub_str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (len--)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	free(s);
	return (sub_str);
}

char	**join_lines(char **lines, char *line)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	while (lines[i] != NULL)
		i++;
	dest = (char **)malloc((2 + i) * sizeof(char *));
	while (lines[j] != NULL)
	{
		dest[j] = lines[j];
		j++;
	}
	i = 0;
	while (line[i])
		i++;
	if (line[i - 1] == '\n')
		line = ft_substr(line, 0, i - 1);
	dest[j] = line;
	dest[j + 1] = NULL;
	free(lines);
	return (dest);
}
