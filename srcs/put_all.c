/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 03:09:37 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/11 17:40:56 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	put_all(t_mlx_datas *mlx)
{
	static int	i = 0;

	i++;
	if (mlx->winner == 1 || mlx->lose == 1)
		mlx_loop_end(mlx->mlx);
	if (i == 900)
	{
		put_sol(mlx);
		put_wall(mlx);
		put_exit(mlx);
		put_pokeball(mlx);
		put_red(mlx);
	}
	if (i == 1100)
	{
		ft_put_put(mlx);
		i = 0;
	}
	return (0);
}
