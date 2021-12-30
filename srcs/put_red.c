/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_red.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 05:18:39 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/30 07:50:17 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	put_begin(t_mlx_datas *mlx)
{
	if (mlx->right == 0 && mlx->left == 0 && mlx->up == 0 && mlx->down == 0)
		p_p_right(mlx);
}

void	put_red(t_mlx_datas *mlx)
{
	put_begin(mlx);
	if (mlx->right == 1)
		p_p_right(mlx);
	if (mlx->left == 1)
		p_p_left(mlx);
	if (mlx->up == 1)
		p_p_up(mlx);
	if (mlx->down == 1)
		p_p_down(mlx);
}
