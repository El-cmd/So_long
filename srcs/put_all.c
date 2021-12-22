/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 03:09:37 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/22 06:05:49 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int put_all(t_mlx_datas *mlx)
{
	static int	i = 0;

    i++;
    init_img(mlx);
    if (i == 1)
    {
        put_sol(mlx);
        put_wall(mlx);
    }
	if (i == 1000)
		put_n2(mlx);
	if (i == 1200)
    {
		put_n1(mlx);
        i = 2;
    }
    return 0;
}
