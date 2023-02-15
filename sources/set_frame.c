/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_frame.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 14:57:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_frame(t_all *all, int set)
{
	mlx_delete_image(all->mlx, all->player.player);
	if (set == 0)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.down.d1);
	if (set == 1)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.up.u1);
	if (set == 2)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.left.l1);
	if (set == 3)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.right.r1);
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
}
