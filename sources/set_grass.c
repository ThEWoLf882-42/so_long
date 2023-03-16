/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_grass.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:49:48 by agimi             #+#    #+#             */
/*   Updated: 2023/03/16 12:03:20 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_grass(t_all *all)
{
	int	x;
	int	y;

	x = 0;
	all->grass.gras1 = mlx_load_xpm42("./xpm/G.xpm42");
	if (!all->grass.gras1)
		get_out_s(all, "XPMMMM'S|\n");
	all->grass.grass = mlx_texture_to_image(all->mlx, \
	&all->grass.gras1->texture);
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
