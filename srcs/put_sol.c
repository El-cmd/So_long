/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 01:35:34 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/22 03:19:59 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    put_sol(t_mlx_datas *mlx)
{
    int n;
    int x;

    x = 0;
    n = 0;
    while (mlx->map[x] != NULL)
    {
        if (mlx->map[x][n] == 0)
        {
            x++;
            n = 0;
        }
        mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->sol.img, mlx->px * n, \
        mlx->px * x);
        n++;
    }
}