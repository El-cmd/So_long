/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:37:03 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/10 15:24:59 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_r(t_mlx_datas *mlx)
{
	mlx->right = 1;
	if (can_move(mlx, mlx->p_x + 1, mlx->p_y))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_x++;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
		mlx->count++;
	}
}	

void	move_l(t_mlx_datas *mlx)
{
	mlx->left = 1;
	if (can_move(mlx, mlx->p_x - 1, mlx->p_y))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_x--;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
		mlx->count++;
	}
}

void	move_u(t_mlx_datas *mlx)
{	
	mlx->up = 1;
	if (can_move(mlx, mlx->p_x, mlx->p_y - 1))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_y--;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
		mlx->count++;
	}
}

void	move_d(t_mlx_datas *mlx)
{
	mlx->down = 1;
	if (can_move(mlx, mlx->p_x, mlx->p_y + 1))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_y++;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
		mlx->count++;
	}
}
