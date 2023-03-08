/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ehook.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:25:03 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 13:16:00 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	load_e(t_all *all, int i)
{
	if (i == 1)
		load_e1(all);
	if (i == 2)
		load_e2(all);
	if (i == 3)
		load_e3(all);
	return (i);
}

void	enemie(t_all *all)
{
	static int	i;
	int			j;

	j = i;
	if (all->coin.cp <= 15)
		i = load_e(all, 1);
	else if (all->coin.cp > 15 && all->coin.cp <= 30)
		i = load_e(all, 2);
	else if (all->coin.cp > 30)
		i = load_e(all, 3);
	if (i != j)
	{
		mlx_delete_image(all->mlx, all->ene.ene);
		set_ene(all);
	}
}

void	ehook(mlx_key_data_t k, void *gg)
{
	t_all		*all;

	all = (t_all *)gg;
	(void)k;
	enemie(all);
	if (mlx_is_key_down(all->mlx, 265))
	{
		if (can_move_e(all, 'd'))
			deloop(all);
		else if (can_move_e(all, 'l'))
			leloop(all);
		else if (can_move_e(all, 'r'))
			reloop(all);
		else if (can_move_e(all, 'u'))
			ueloop(all);
	}
	else if (mlx_is_key_down(all->mlx, 264))
	{
		if (can_move_e(all, 'u'))
			ueloop(all);
		else if (can_move_e(all, 'r'))
			reloop(all);
		else if (can_move_e(all, 'l'))
			leloop(all);
		else if (can_move_e(all, 'd'))
			deloop(all);
	}
	else if (mlx_is_key_down(all->mlx, 263))
	{
		if (can_move_e(all, 'r'))
			reloop(all);
		else if (can_move_e(all, 'u'))
			ueloop(all);
		else if (can_move_e(all, 'd'))
			deloop(all);
		else if (can_move_e(all, 'l'))
			leloop(all);
	}
	else if (mlx_is_key_down(all->mlx, 262))
	{
		if (can_move_e(all, 'l'))
			leloop(all);
		else if (can_move_e(all, 'd'))
			deloop(all);
		else if (can_move_e(all, 'u'))
			ueloop(all);
		else if (can_move_e(all, 'r'))
			reloop(all);
	}
}
