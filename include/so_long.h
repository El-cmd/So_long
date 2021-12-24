/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:02:23 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/24 05:32:53 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct img_data
{
	void	*img;
	int		width;
	int		height;
}	t_img_datas;

typedef struct mlx_data
{
	void		*mlx;
	void		*win;
	char		**map;
	int			x_max;
	int			y_max;
	int			p_x;
	int			p_y;
	int			px;
	int			win_x;
	int			win_y;
	int			pokeball;
	int			winner;
	int			right;
	int			left;
	int			up;
	int			down;
	t_img_datas	wall;
	t_img_datas	sol;
	t_img_datas	N1;
	t_img_datas	N2;
	t_img_datas	exit;
	t_img_datas	poke;
	t_img_datas	p_up;
	t_img_datas	p_down;
	t_img_datas	p_left;
	t_img_datas	p_right;
}	t_mlx_datas;

typedef struct all
{
	t_mlx_datas	mlx[1];
}	t_all;

void	read_map(t_mlx_datas *mlx);
char	**get_next_line(int fd);
char	**ft_split(char *s, char c);
void	find_P(t_mlx_datas *mlx);
void	init(t_mlx_datas *mlx);
void	count_c(t_mlx_datas *mlx);
int		can_move(t_mlx_datas *mlx, int x, int y);
void	mlx_img(t_mlx_datas *mlx, void *img, int x, int y);
void	init_img(t_mlx_datas *mlx);
void	put_sol(t_mlx_datas *mlx);
void	put_wall(t_mlx_datas *mlx);
int		put_all(t_mlx_datas *mlx);
void	put_n1(t_mlx_datas *mlx);
void	put_n2(t_mlx_datas *mlx);
void	put_exit(t_mlx_datas *mlx);
void	put_pokeball(t_mlx_datas *mlx);
void    p_p_right(t_mlx_datas *mlx);
void    p_p_left(t_mlx_datas *mlx);
void    p_p_up(t_mlx_datas *mlx);
void    p_p_down(t_mlx_datas *mlx);
void    put_red(t_mlx_datas *mlx);
void	hakai(t_mlx_datas *mlx);

#endif