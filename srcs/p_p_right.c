/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_p_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 04:48:52 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/10 15:31:21 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	p_p_right(t_mlx_datas *mlx)
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
			if (mlx->map[i][n] == 'P')
				mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->p_right.img, \
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
