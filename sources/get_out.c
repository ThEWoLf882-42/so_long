/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_out.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:13:13 by agimi             #+#    #+#             */
/*   Updated: 2023/03/13 15:22:10 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_out(t_all *all)
{
	if (all->px >= all->exit.ex - 12 && all->px <= all->exit.ex + 12)
	{
		if (all->py + 27 >= all->exit.ey - 12
			&& all->py + 27 <= all->exit.ey + 12)
		{
			if (all->coin.cc == -69)
			{
				ft_putstr_fd("You Won!!\nWhat a great player you are... 😒\n", 1);
				mlx_close_window(all->mlx);
				mlx_terminate(all->mlx);
				exit(0);
			}
		}
	}
}

void	get_out_s(t_all *all, char *s)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(s, 2);
	if (all->mlx)
	{
		mlx_close_window(all->mlx);
		mlx_terminate(all->mlx);
	}
	exit(1);
}

void	loser(t_all *all)
{
	ft_putstr_fd("Gotta Catch 'Em All\nLoser 🤪\n", 1);
	mlx_close_window(all->mlx);
	mlx_terminate(all->mlx);
	exit(0);
}
