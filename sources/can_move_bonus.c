/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_move_e.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:34:56 by agimi             #+#    #+#             */
/*   Updated: 2023/03/03 18:41:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	its_w_e(t_all *all, int x, int y)
{
	t_wadb	*t;

	t = all->wadb->next;
	if (y < 69 || x < 69 || x > (all->mpx - 2) * 69 || y > (all->mpy - 2) * 69)
		return (1);
	while (t)
	{
		if (x >= t->wx - 51 && x <= t->wx + 51)
			if (y >= t->wy - 51 && y <= t->wy + 51)
				return (1);
		t = t->next;
	}
	return (0);
}

int	can_move_e(t_all *all, char c)
{
	int	x;
	int	y;

	x = all->ene.ex;
	y = all->ene.ey;
	if (c == 'd')
		y += all->ene.esp;
	if (c == 'u')
		y -= all->ene.esp;
	if (c == 'l')
		x -= all->ene.esp;
	if (c == 'r')
		x += all->ene.esp;
	if (its_w_e(all, x, y))
		return (0);
	return (1);
}
