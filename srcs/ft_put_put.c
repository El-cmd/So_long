/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:32:57 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/11 17:47:40 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_put_put(t_mlx_datas *mlx)
{
	static int	i = 0;

	i++;
	if (i < 5)
		put_n1(mlx);
	if (i > 5)
	{
		put_n2(mlx);
	}
	if (i > 11)
		i = 0;
}
