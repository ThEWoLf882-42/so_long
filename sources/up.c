/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:32:59 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 20:07:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	uloop(t_all *all)
{
	static int	i;

	if (!can_move(all, 'u'))
		return ;
	mlx_delete_image(all->mlx, all->player.player);
	if (i >= 0 && i <= 8)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.up.u2);
	if (i >= 8 && i <= 16)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.up.u1);
	if (i >= 16 && i <= 24)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.up.u0);
	if (i >= 24 && i <= 32)
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.up.u1);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
	all->py -= 3;
	i++;
}
