/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 01:03:29 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/30 07:36:48 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	can_move(t_mlx_datas *mlx, int x, int y)
{
	if (mlx->map[y][x] == '1')
		return (0);
	if (mlx->map[y][x] == 'C')
		mlx->pokeball--;
	if (mlx->map[y][x] == 'E' && mlx->pokeball == 0)
		mlx->winner = 1;
	if (mlx->map[y][x] == 'E' && mlx->pokeball > 0)
		return (0);
	if (mlx->map[y][x] == 'I')
		mlx->lose = 1;
	return (1);
}
