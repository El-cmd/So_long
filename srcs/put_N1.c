/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_N1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 05:17:05 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/10 15:29:38 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	put_n1(t_mlx_datas *mlx)
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
			if (mlx->map[i][n] == 'I')
				mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->n1.img, \
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
