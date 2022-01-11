/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 00:15:01 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/10 15:02:57 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	init_img(t_mlx_datas *mlx)
{
	mlx->wall.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/WALLF.xpm", \
	&mlx->wall.width, &mlx->wall.height);
	mlx->sol.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/solFINAl.xpm", \
	&mlx->sol.width, &mlx->sol.height);
	mlx->n1.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/N1.xpm", \
	&mlx->n1.width, &mlx->n1.height);
	mlx->n2.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/N2.xpm", \
	&mlx->n2.width, &mlx->n2.height);
	mlx->exit.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/exit.xpm", \
	&mlx->exit.width, &mlx->exit.height);
	mlx->poke.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/collect.xpm", \
	&mlx->poke.width, &mlx->poke.height);
	mlx->p_up.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/p_up.xpm", \
	&mlx->p_up.width, &mlx->p_up.height);
	mlx->p_down.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/p_down.xpm", \
	&mlx->p_down.width, &mlx->p_down.height);
	mlx->p_left.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/p_left.xpm", \
	&mlx->p_left.width, &mlx->p_left.height);
	mlx->p_right.img = mlx_xpm_file_to_image(mlx->mlx, "Textures/p_right.xpm", \
	&mlx->p_right.width, &mlx->p_right.height);
}
