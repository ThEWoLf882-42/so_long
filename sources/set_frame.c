/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_frame.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 12:38:12 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_frame(t_all *all, int set)
{
	mlx_delete_image(all->my.mlx, all->my.player);
	if (set == 0)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.down.d1);
	if (set == 1)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.up.u1);
	if (set == 2)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.left.l1);
	if (set == 3)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.right.r1);
	mlx_image_to_window(all->my.mlx, all->my.player, all->px, all->py);
}
