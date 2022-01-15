/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 03:32:32 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/15 17:20:52 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s)
	{
		i = ft_strlen(s);
		write(fd, s, i);
	}
}

int	only_one(t_mlx_datas *mlx)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (mlx->map[i] != NULL)
	{
		if (mlx->map[i][0] != '1')
			return (0);
		if (mlx->map[i][ft_strlen(mlx->map[0]) - 1] != '1' \
		&& mlx->map[i][ft_strlen(mlx->map[0]) - 1] != 0)
			return (0);
		i++;
	}
	while (mlx->map[0][n] != 0 || mlx->map[i - 1][n] != 0)
	{
		if (mlx->map[0][n] != '1')
			return (0);
		if (mlx->map[i - 1][n] != '1')
			return (0);
		n++;
	}
	return (1);
}

int	one_for_all(t_mlx_datas *mlx, int i, int n)
{
	int	e;
	int	c;
	int	p;

	while (mlx->map[i] != NULL)
	{
		if (mlx->map[i][n] == 'C')
			c = 1;
		if (mlx->map[i][n] == 'E')
			e = 1;
		if (mlx->map[i][n] == 'P')
			p = 1;
		if (mlx->map[i][n] == 0)
		{
			i++;
			n = 0;
		}
		n++;
	}
	if (p == 1 && c == 1 && e == 1)
		return (1);
	return (0);
}

int	check_map(t_mlx_datas *mlx)
{
	int	i;
	int	w;
	int	y;

	i = 0;
	w = 0;
	y = 0;
	if (mlx->map[i] == NULL)
	{
		ft_putstr_fd("There is no map\n", 2);
		return (0);
	}
	while (mlx->map[i] != NULL)
	{
		if (ft_strlen(mlx->map[0]) != ft_strlen(mlx->map[i]) \
		|| only_one(mlx) == 0 || one_for_all(mlx, w, y) == 0)
		{
			ft_putstr_fd("Error\nInvalid map\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}
