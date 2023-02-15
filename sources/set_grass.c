/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_grass.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:49:48 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 14:57:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_grass(t_all *all)
{
	int	x;
	int	y;

	x = 0;
	all->grass.gras1 = mlx_load_png("./img/G.png");
	all->grass.grass = mlx_texture_to_image(all->mlx, all->grass.gras1);
	while (x < all->mpx * 69)
	{
		y = 0;
		while (y < all->mpy * 69)
		{
			mlx_image_to_window(all->mlx, all->grass.grass, x, y);
			y += 69;
		}
		x += 69;
	}
}
