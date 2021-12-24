/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:01:15 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/24 05:49:12 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

void	move_r(t_mlx_datas *mlx)
{
	mlx->right = 1;
	if (can_move(mlx, mlx->p_x + 1, mlx->p_y))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';	
		mlx->p_x++;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
	}
}	

void	move_l(t_mlx_datas *mlx)
{
	mlx->left = 1;
	if (can_move(mlx, mlx->p_x - 1, mlx->p_y))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_x--;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
	}
}

void	move_u(t_mlx_datas *mlx)
{	
	mlx->up = 1;
	if (can_move(mlx, mlx->p_x, mlx->p_y - 1))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_y--;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
	}
}

void	move_d(t_mlx_datas *mlx)
{
	mlx->down = 1;
	if (can_move(mlx, mlx->p_x, mlx->p_y + 1))
	{
		mlx->map[mlx->p_y][mlx->p_x] = '0';
		mlx->p_y++;
		mlx->map[mlx->p_y][mlx->p_x] = 'P';
	}
}

int	test(int keycode, t_mlx_datas *mlx)
{
	int i = 0;
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
	while (mlx->map[i] != NULL)
	{
		printf("%s\n", mlx->map[i]);
		i++;
	}
	printf("\n");
	printf("x = %d y = %d et poke = %d\n", mlx->p_x, mlx->p_y, mlx->pokeball);
	return 0;
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

int	main()
{
	t_all	tout;

	read_map(tout.mlx);
	find_P(tout.mlx);
	count_c(tout.mlx);
	init(tout.mlx);
	init_img(tout.mlx);
	mlx_key_hook(tout.mlx->win, test, &tout);
	mlx_loop_hook(tout.mlx->mlx, put_all, &tout);
	mlx_hook(tout.mlx->win, 2, 1L << 0, close_win, &tout);
	mlx_hook(tout.mlx->win, 17, 1L << 0, close_win_cross, &tout);
	mlx_loop(tout.mlx->mlx);
	hakai(tout.mlx);
	return 0;
}
