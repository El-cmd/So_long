/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hakai.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:11:35 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/23 01:26:55 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	freedom(char **map)
{
	int	i;

	i = 0;
	if (map != NULL)
	{
		while (map[i] != NULL)
		{
			free(map[i]);
			i++;
		}
		free(map);
	}
}

void	destruction(t_mlx_datas *mlx)
{
	mlx_destroy_image(mlx->mlx, mlx->wall.img);
	mlx_destroy_image(mlx->mlx, mlx->sol.img);
	mlx_destroy_image(mlx->mlx, mlx->N1.img);
	mlx_destroy_image(mlx->mlx, mlx->N2.img);
}

void	hakai(t_mlx_datas *mlx)
{
	freedom(mlx->map);
	destruction(mlx);
	mlx_destroy_window(mlx->mlx, mlx->win);
	mlx_destroy_display(mlx->mlx);
	free(mlx->mlx);
}
