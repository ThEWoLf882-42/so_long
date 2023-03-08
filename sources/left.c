/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:54:30 by agimi             #+#    #+#             */
/*   Updated: 2023/03/07 12:02:29 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	leloop(t_all *all)
{
	static int	i;

	mlx_delete_image(all->mlx, all->ene.ene);
	if (i >= 0 && i <= 8)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.el0->texture);
	if (i >= 8 && i <= 16)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.el1->texture);
	if (i >= 16 && i <= 24)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.el2->texture);
	if (i >= 24 && i <= 32)
		all->ene.ene = mlx_texture_to_image(all->mlx, \
		&all->ene.el3->texture);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->mlx, all->ene.ene, all->ene.ex, all->ene.ey);
	all->ene.ex -= all->ene.esp;
	i++;
}

void	lloop(t_all *all)
{
	static int	i;

	if (!can_move(all, 'l'))
		return ;
	mlx_delete_image(all->mlx, all->player.player);
	if (i >= 0 && i <= 8)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.left.l2->texture);
	if (i >= 8 && i <= 16)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.left.l1->texture);
	if (i >= 16 && i <= 24)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.left.l0->texture);
	if (i >= 24 && i <= 32)
		all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.left.l1->texture);
	if (i == 32)
		i = 0;
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
	all->px -= 3;
	i++;
}
