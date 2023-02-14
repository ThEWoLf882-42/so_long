/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:34:14 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 12:36:56 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	dloop(t_all *all)
{
	static int	i;

	mlx_delete_image(all->my.mlx, all->my.player);
	if (i >= 0 && i <= 8)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.down.d2);
	if (i >= 8 && i <= 16)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.down.d1);
	if (i >= 16 && i <= 24)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.down.d0);
	if (i >= 24 && i <= 32)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.down.d1);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->my.mlx, all->my.player, all->px, all->py);
	all->py += 3;
	i++;
}
