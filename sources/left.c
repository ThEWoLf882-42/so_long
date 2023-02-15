/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:54:30 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 20:08:21 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	lloop(t_all *all)
{
	static int	i;

	if (!can_move(all, 'l'))
		return ;
	mlx_delete_image(all->mlx, all->player.player);
	if (i >= 0 && i <= 8)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.left.l2);
	if (i >= 8 && i <= 16)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.left.l1);
	if (i >= 16 && i <= 24)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.left.l0);
	if (i >= 24 && i <= 32)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.left.l1);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
	all->px -= 3;
	i++;
}
