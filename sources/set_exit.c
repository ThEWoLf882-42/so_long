/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:35 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:22:48 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_e(t_all *all)
{
	all->coin.cc = -69;
	mlx_delete_image(all->mlx, all->exit.exit);
	all->exit.exit = mlx_texture_to_image(all->mlx, &all->exit.eo->texture);
	mlx_image_to_window(all->mlx, all->exit.exit, \
		all->exit.ex, all->exit.ey);
}

void	set_exit(t_all *all, int x, int y)
{
	if (all->exit.exc != 0)
		get_out_s(all, "To Many Exit\n");
	all->exit.ec = mlx_load_xpm42("./xpm/EC.xpm42");
	all->exit.eo = mlx_load_xpm42("./xpm/EO.xpm42");
	all->exit.exit = mlx_texture_to_image(all->mlx, &all->exit.ec->texture);
	all->exit.ex = x * 69;
	all->exit.ey = y * 69;
	mlx_image_to_window(all->mlx, all->exit.exit, \
		all->exit.ex, all->exit.ey);
	all->exit.exc++;
}
