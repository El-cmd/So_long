/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:16:10 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/20 05:28:05 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	read_map(t_mlx_datas *mlx)
{
	int	fd;
	int i;

	i = 0;
	fd = open("map/map.ber", O_RDONLY);
	mlx->map = get_next_line(fd);
	while (mlx->map[i] != NULL)
		i++;
	mlx->y_max = i;
	i = 0;
	while (mlx->map[0][i] != 0)
		i++;
	mlx->x_max = i;
}
