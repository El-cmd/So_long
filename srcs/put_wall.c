/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_wall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 03:12:53 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/10 15:07:25 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	put_wall(t_mlx_datas *mlx)
{
	int	i;
	int	n;
	int	x;
	int	y;

	y = 0;
	x = 0;
	n = 0;
	i = 0;
	while (y < 500)
	{
		while (x < 1000)
		{
			if (mlx->map[i][n] == 49)
				mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->wall.img, \
				x, y);
			x += 50;
			n++;
		}
		n = 0;
		y += 50;
		x = 0;
		i++;
	}
}
