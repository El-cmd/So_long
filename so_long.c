/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:01:15 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/11 04:06:29 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

int	test(int keycode, t_mlx_datas *mlx)
{
	mlx->right = 0;
	mlx->left = 0;
	mlx->up = 0;
	mlx->down = 0;
	if (keycode == 'd')
		move_r(mlx);
	if (keycode == 'q')
		move_l(mlx);
	if (keycode == 'z')
		move_u(mlx);
	if (keycode == 's')
		move_d(mlx);
	return (0);
}

int	close_win(int keysym, t_mlx_datas *mlx)
{
	if (keysym == 65307)
		mlx_loop_end (mlx->mlx);
	return (0);
}

int	close_win_cross(t_mlx_datas *mlx)
{
	mlx_loop_end (mlx->mlx);
	return (0);
}

int	main(int ac, char **av)
{
	t_all	tout;

	if (ac == 2)
	{
		read_map(tout.mlx, av[1]);
		find_p(tout.mlx);
		count_c(tout.mlx);
		init(tout.mlx);
		init_img(tout.mlx);
		mlx_key_hook(tout.mlx->win, test, &tout);
		mlx_loop_hook(tout.mlx->mlx, put_all, &tout);
		mlx_hook(tout.mlx->win, 2, 1L << 0, close_win, &tout);
		mlx_hook(tout.mlx->win, 17, 1L << 0, close_win_cross, &tout);
		mlx_loop(tout.mlx->mlx);
	}
	hakai(tout.mlx);
	return (0);
}
