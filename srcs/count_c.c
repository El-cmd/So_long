/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 00:36:12 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/30 07:38:33 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	count_c(t_mlx_datas *mlx)
{
	int	i;
	int	n;
	int	count;

	i = 0;
	n = 0;
	count = 0;
	while (mlx->map[i] != NULL)
	{
		if (mlx->map[i][n] == 'C')
			count++;
		if (mlx->map[i][n] == 0)
		{
			n = 0;
			i++;
		}
		n++;
	}
	mlx->pokeball = count;
}
