/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:35 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 18:59:47 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_e(t_all *all)
{
	mlx_delete_image(all->mlx, all->exit.exit);
	all->exit.exit = mlx_texture_to_image(all->mlx, all->exit.eo);
	mlx_image_to_window(all->mlx, all->exit.exit, \
		all->exit.ex, all->exit.ey);
}

void	set_exit(t_all *all, int x, int y)
{
	if (all->exit.exc != 0)
		write(1, "To Many Exit\n", 13);
	all->exit.ec = mlx_load_png("./img/EC.png");
	all->exit.eo = mlx_load_png("./img/EO.png");
	all->exit.exit = mlx_texture_to_image(all->mlx, all->exit.ec);
	all->exit.ex = x * 69;
	all->exit.ey = y * 69;
	mlx_image_to_window(all->mlx, all->exit.exit, \
		all->exit.ex, all->exit.ey);
	all->exit.exc++;
}
