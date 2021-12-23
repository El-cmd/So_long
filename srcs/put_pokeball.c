/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pokeball.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 04:34:02 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/23 04:38:56 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    put_pokeball(t_mlx_datas *mlx)
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
            if (mlx->map[i][n] == 'C')
		        mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->poke.img,\
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