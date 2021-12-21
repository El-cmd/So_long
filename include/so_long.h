/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:02:23 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/21 04:35:03 by vlothlinux       ###   ########.fr       */
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

typedef struct mlx_data
{
	void	*mlx;
	void	*win;
	char	**map;
	int		x_max;
	int		y_max;
	int		p_x;
	int		p_y;
	int		px;
	int		win_x;
	int		win_y;
	int		pokeball;
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

#endif