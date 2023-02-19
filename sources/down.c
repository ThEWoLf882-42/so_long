/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:34:14 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:15:32 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	dloop(t_all *all)
{
	static int	i;

	if (!can_move(all, 'd'))
		return ;
	mlx_delete_image(all->mlx, all->player.player);
	if (i >= 0 && i <= 8)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.down.d2->texture);
	if (i >= 8 && i <= 16)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.down.d1->texture);
	if (i >= 16 && i <= 24)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.down.d0->texture);
	if (i >= 24 && i <= 32)
		all->player.player = mlx_texture_to_image(all->mlx, &all->mv.down.d1->texture);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
	all->py += 3;
	i++;
}
