/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:02:23 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/15 17:11:23 by vlothlinux       ###   ########.fr       */
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
	int			lose;
	int			right;
	int			left;
	int			up;
	int			down;
	int			count;
	t_img_datas	wall;
	t_img_datas	sol;
	t_img_datas	n1;
	t_img_datas	n2;
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

int		read_map(t_mlx_datas *mlx, char *av);
char	**get_next_line(int fd);
char	**ft_split(char *s, char c);
void	find_p(t_mlx_datas *mlx);
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
void	p_p_right(t_mlx_datas *mlx);
void	p_p_left(t_mlx_datas *mlx);
void	p_p_up(t_mlx_datas *mlx);
void	p_p_down(t_mlx_datas *mlx);
void	put_red(t_mlx_datas *mlx);
void	hakai(t_mlx_datas *mlx);
void	move_d(t_mlx_datas *mlx);
void	move_u(t_mlx_datas *mlx);
void	move_l(t_mlx_datas *mlx);
void	move_r(t_mlx_datas *mlx);
size_t	ft_strlen(char *str);
int		check_map(t_mlx_datas *mlx);
void	freedom(char **map);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_put_put(t_mlx_datas *mlx);
#endif