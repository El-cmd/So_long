/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 00:15:01 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/23 04:38:08 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    init_img(t_mlx_datas *mlx)
{
    mlx->wall.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/WALLF.xpm",    \
    &mlx->wall.width, &mlx->wall.height);
    mlx->sol.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/solFINAl.xpm",  \
    &mlx->sol.width, &mlx->sol.height);
    mlx->N1.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/N1.xpm",  \
    &mlx->N1.width, &mlx->N1.height);
    mlx->N2.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/N2.xpm",  \
    &mlx->N2.width, &mlx->N2.height);
    mlx->exit.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/exit.xpm",  \
    &mlx->exit.width, &mlx->exit.height);
    mlx->poke.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/collect.xpm",  \
    &mlx->poke.width, &mlx->poke.height);
}
