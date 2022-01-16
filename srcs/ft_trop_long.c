/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trop_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:03:19 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/16 15:56:17 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	check_extension_2(int check, char c)
{
	if (check == 0 && c == 'r')
		return (1);
	else if (check == 1 && c == 'e')
		return (1);
	else if (check == 2 && c == 'b')
		return (1);
	else if (check == 3 && c == '.')
		return (1);
	return (-1);
}

int	check_extension(char *file)
{
	int	i;
	int	check;

	i = 0;
	while (file[i] != '\0')
		i++;
	if (i == 0)
		return (-1);
	i--;
	check = 0;
	while (i != 0 && check != 4)
	{
		if (check_extension_2(check, file[i]) == 1)
			i--;
		else
			return (-1);
		check++;
	}
	if (check != 4)
		return (-1);
	return (0);
}

int	check_params(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr_fd("Error\nPlease give a map with a .ber extension.\n", 2);
		return (-1);
	}
	else if (ac > 2)
	{
		ft_putstr_fd("Error\nPlease give only one argument.\n", 2);
		return (-1);
	}
	else
	{
		if (check_extension(av[1]) == -1)
		{
			ft_putstr_fd("Error\nWrong file extension.\n", 2);
			return (-1);
		}
	}
	return (0);
}
