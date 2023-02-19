/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_frame.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:23:46 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_frame(t_all *all, int set)
{
	mlx_delete_image(all->mlx, all->player.player);
	if (set == 0)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.down.d1->texture);
	if (set == 1)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.up.u1->texture);
	if (set == 2)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.left.l1->texture);
	if (set == 3)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.right.r1->texture);
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
}
