/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:57:23 by agimi             #+#    #+#             */
/*   Updated: 2023/03/16 18:25:01 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	reloop(t_all *all)
{
	static int	i;

	mlx_delete_image(all->mlx, all->ene.ene);
	if (i >= 0 && i <= 8)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.er0->texture);
	if (i >= 8 && i <= 16)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.er1->texture);
	if (i >= 16 && i <= 24)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.er2->texture);
	if (i >= 24 && i <= 32)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.er3->texture);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->mlx, all->ene.ene, all->ene.ex, all->ene.ey);
	all->ene.ex += all->ene.esp;
	i++;
}

void	rloop(t_all *all)
{
	static int	i;

	if (!can_move(all, 'r'))
		return ;
	mlx_delete_image(all->mlx, all->player.player);
	if (i >= 0 && i <= 5)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.right.r2->texture);
	if (i >= 5 && i <= 10)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.right.r1->texture);
	if (i >= 10 && i <= 15)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.right.r0->texture);
	if (i >= 15 && i <= 20)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.right.r1->texture);
	if (i == 20)
		i = 0;
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
	all->px += 9;
	i++;
}
