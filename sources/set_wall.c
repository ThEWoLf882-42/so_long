/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_wall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:38:35 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:26:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	upwall(t_all *all)
{
	int	i;
	int	x;

	i = all->mpx - 1;
	x = 0;
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.ruc->texture);
	mlx_image_to_window(all->mlx, all->wall.wall, x, 0);
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.mu->texture);
	while (--i)
	{
		x += 69;
		mlx_image_to_window(all->mlx, all->wall.wall, x, 0);
	}
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.luc->texture);
	mlx_image_to_window(all->mlx, all->wall.wall, x + 69, 0);
}

void	leftwall(t_all *all)
{
	int	i;
	int	y;

	i = all->mpy - 1;
	y = 0;
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.mr->texture);
	while (--i)
	{
		y += 69;
		mlx_image_to_window(all->mlx, all->wall.wall, 0, y);
	}
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.rdc->texture);
	mlx_image_to_window(all->mlx, all->wall.wall, 0, y + 69);
}

void	rightwall(t_all *all)
{
	int	i;
	int	y;

	i = all->mpy - 1;
	y = 0;
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.ml->texture);
	while (--i)
	{
		y += 69;
		mlx_image_to_window(all->mlx, all->wall.wall, \
			(all->mpx - 1) * 69, y);
	}
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.ldc->texture);
	mlx_image_to_window(all->mlx, all->wall.wall, \
		(all->mpx - 1) * 69, y + 69);
}

void	downwall(t_all *all)
{
	int	i;
	int	x;

	i = all->mpx - 1;
	x = 0;
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.md->texture);
	while (--i)
	{
		x += 69;
		mlx_image_to_window(all->mlx, all->wall.wall, x, \
			(all->mpy - 1) * 69);
	}
}

void	set_s_wall(t_all *all)
{
	t_wadb	*t;

	load_w_xpm(all);
	upwall(all);
	leftwall(all);
	rightwall(all);
	downwall(all);
	t = all->wadb->next;
	all->wall.wall = mlx_texture_to_image(all->mlx, &all->wall.w->texture);
	while (t)
	{
		mlx_image_to_window(all->mlx, all->wall.wall, t->wx, t->wy);
		t = t->next;
	}
}
