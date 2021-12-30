/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 01:23:51 by vloth             #+#    #+#             */
/*   Updated: 2021/12/30 07:40:40 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*ndest;
	char	*nsrc;
	size_t	i;

	ndest = (char *)dest;
	nsrc = (char *)src;
	if (!dest && !src)
		return (0);
	i = 0;
	while (n > i)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;

	if (s2 != 0)
	{
		join = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!join)
			return (0);
		ft_memcpy(join, s1, ft_strlen(s1));
		ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
		join[ft_strlen(s1) + ft_strlen(s2)] = 0;
		free(s1);
		s1 = NULL;
		return (join);
	}
	return (s1);
}

char	*freeee(char *save)
{
	if (save)
	{
		free(save);
		save = NULL;
	}
	return (save);
}

char	*ft_strdup(char *s)
{
	char	*tab;
	size_t	n;

	n = 0;
	tab = malloc(sizeof (char) * ft_strlen(s) + 1);
	if (!tab)
		return (0);
	while (s[n])
	{
		tab[n] = s[n];
		n++;
	}
	tab[n] = 0;
	freeee(s);
	return (tab);
}

char	**get_next_line(int fd)
{
	static char	*save;
	char		buff[BUFFER_SIZE + 1];
	int			ret;
	char		*line;

	ret = 1;
	if (fd > 1024 || fd < 0 || BUFFER_SIZE < 0 || ret < 0)
		return (NULL);
	while (ret != 0)
	{
		ret = read(fd, buff, BUFFER_SIZE);
		buff[ret] = 0;
		if (ret < 0)
			return (NULL);
		save = ft_strjoin(save, buff);
	}
	line = ft_strdup(save);
	return (ft_split(line, '\n'));
}
