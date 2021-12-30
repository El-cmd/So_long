/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_N1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 05:17:05 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/30 07:57:07 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	put_n1(t_mlx_datas *mlx)
{
	int	i;
	int	n;
	int	X;
	int	Y;

	Y = 0;
	X = 0;
	n = 0;
	i = 0;
	while (Y < 500)
	{
		while (X < 1000)
		{
			if (mlx->map[i][n] == 'I')
				mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->N1.img, \
				X, Y);
			X += 50;
			n++;
		}
		n = 0;
		Y += 50;
		X = 0;
		i++;
	}
}
