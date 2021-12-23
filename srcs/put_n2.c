/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_n2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 05:20:50 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/23 03:53:30 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    put_n2(t_mlx_datas *mlx)
{
    int i;
    int n;
    int X;
    int Y;
    int static p = 0;

    Y  = 0;
    X  = 0;
    n = 0;
    i = 0;
    while (Y < 500)
    {
        while (X < 1000)
        {
            if (mlx->map[i][n] == 'I')
		        mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->N2.img, X, Y);
		    X += 50;
            n++;
        }
        n = 0;
        Y += 50;
        X = 0;
        i++;
	}
}