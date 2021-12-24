/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_red.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 05:18:39 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/24 05:47:14 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    put_red(t_mlx_datas *mlx)
{
    if (mlx->right == 1)
        p_p_right(mlx);
    if (mlx->left == 1)
        p_p_left(mlx);
    if (mlx->up == 1)
        p_p_up(mlx);
    if (mlx->down == 1)
        p_p_down(mlx);
}