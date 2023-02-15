/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:35 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 14:57:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_exit(t_all *all, int x, int y)
{
	all->exit.ec = mlx_load_png("./img/EC.png");
	all->exit.eo = mlx_load_png("./img/EO.png");
	all->exit.exit = mlx_texture_to_image(all->mlx, all->exit.ec);
	all->exit.ex = x * 69;
	all->exit.ey = (all->mpy - y - 1) * 69;
	mlx_image_to_window(all->mlx, all->exit.exit, \
		all->exit.ex, all->exit.ey);
}
