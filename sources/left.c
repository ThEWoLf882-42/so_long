/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:54:30 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 12:37:23 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	lloop(t_all *all)
{
	static int	i;

	mlx_delete_image(all->my.mlx, all->my.player);
	if (i >= 0 && i <= 8)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.left.l2);
	if (i >= 8 && i <= 16)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.left.l1);
	if (i >= 16 && i <= 24)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.left.l0);
	if (i >= 24 && i <= 32)
		all->my.player = mlx_texture_to_image(all->my.mlx, all->mv.left.l1);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->my.mlx, all->my.player, all->px, all->py);
	all->px -= 3;
	i++;
}
