/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_p_left.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 05:04:08 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/24 05:10:50 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    p_p_left(t_mlx_datas *mlx)
{
    int i;
    int n;
    int X;
    int Y;

    Y  = 0;
    X  = 0;
    n = 0;
    i = 0;
    while (Y < 500)
    {
        while (X < 1000)
        {
            if (mlx->map[i][n] == 'P')
		        mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->p_left.img,\
                X, Y);
		    X += 50;
            n++;
        }
        n = 0;
        Y += 50;
        X = 0;
        i++;
	}
}