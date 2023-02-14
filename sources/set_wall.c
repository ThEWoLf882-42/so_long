/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_wall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:38:35 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 20:17:09 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	upwall(t_all *all)
{
	int	i;
	int	x;

	i = all->mpx - 1;
	x = 0;
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.ruc);
	mlx_image_to_window(all->my.mlx, all->wall.wall, x, 0);
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.mu);
	while (--i)
	{
		x += 69;
		mlx_image_to_window(all->my.mlx, all->wall.wall, x, 0);
	}
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.luc);
	mlx_image_to_window(all->my.mlx, all->wall.wall, x + 69, 0);
}

void	leftwall(t_all *all)
{
	int	i;
	int	y;

	i = all->mpy - 1;
	y = 0;
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.mr);
	while (--i)
	{
		y += 69;
		mlx_image_to_window(all->my.mlx, all->wall.wall, 0, y);
	}
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.rdc);
	mlx_image_to_window(all->my.mlx, all->wall.wall, 0, y + 69);
}

void	rightwall(t_all *all)
{
	int	i;
	int	y;

	i = all->mpy - 1;
	y = 0;
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.ml);
	while (--i)
	{
		y += 69;
		mlx_image_to_window(all->my.mlx, all->wall.wall, \
			(all->mpx - 1) * 69, y);
	}
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.ldc);
	mlx_image_to_window(all->my.mlx, all->wall.wall, \
		(all->mpx - 1) * 69, y + 69);
}

void	downwall(t_all *all)
{
	int	i;
	int	x;

	i = all->mpx - 1;
	x = 0;
	all->wall.wall = mlx_texture_to_image(all->my.mlx, all->wall.md);
	while (--i)
	{
		x += 69;
		mlx_image_to_window(all->my.mlx, all->wall.wall, x, \
			(all->mpy - 1) * 69);
	}
}

void	set_wall(t_all *all)
{
	load_w_png(all);
	upwall(all);
	leftwall(all);
	rightwall(all);
	downwall(all);
}
