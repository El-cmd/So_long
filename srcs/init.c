/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:02:23 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/30 08:00:08 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	init(t_mlx_datas *mlx)
{
	mlx->px = 50;
	mlx->win_x = (mlx->x_max) * (mlx->px);
	mlx->win_y = (mlx->y_max) * (mlx->px);
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx, mlx->win_x, mlx->win_y, "so_long");
	mlx->winner = 0;
	mlx->lose = 0;
	mlx->right = 0;
	mlx->left = 0;
	mlx->up = 0;
	mlx->down = 0;
}
