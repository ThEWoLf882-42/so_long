/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ehook.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:25:03 by agimi             #+#    #+#             */
/*   Updated: 2023/03/16 18:27:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	abs(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

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

void	ehook(void *gg)
{
	t_all	*all;
	int		x;
	int		y;

	all = (t_all *)gg;
	enemie(all);
	x = all->px - all->ene.ex;
	y = (all->py + 27) - all->ene.ey;
	if (x > 1 && can_move_e(all, 'r'))
		reloop(all);
	else if (y > 0 && can_move_e(all, 'd'))
		deloop(all);
	else if (x < -1 && can_move_e(all, 'l'))
		leloop(all);
	else if (y < -1 && can_move_e(all, 'u'))
		ueloop(all);
	if (all->px >= all->ene.ex - 35 && all->px <= all->ene.ex + 35)
		if (all->py + 27 >= all->ene.ey - 35
			&& all->py + 27 <= all->ene.ey + 35)
			loser(all);
}
