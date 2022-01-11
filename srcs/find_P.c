/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_P.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:40:33 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/10 15:08:45 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	find_p(t_mlx_datas *mlx)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (mlx->map[i][n] != 'P')
	{
		if (mlx->map[i][n] == 0)
		{
			n = 0;
			i++;
		}
		n++;
	}
	mlx->p_x = n;
	mlx->p_y = i;
}
