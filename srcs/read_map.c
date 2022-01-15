/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:16:10 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/15 17:18:36 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	read_map(t_mlx_datas *mlx, char *av)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(av, O_RDONLY);
	mlx->map = get_next_line(fd);
	if (check_map(mlx) == 0)
	{
		freedom(mlx->map);
		exit(1);
	}
	while (mlx->map[i] != NULL)
		i++;
	mlx->y_max = i;
	i = 0;
	while (mlx->map[0][i] != 0)
		i++;
	mlx->x_max = i;
	return (1);
}
