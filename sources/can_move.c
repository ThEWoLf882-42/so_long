/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:00:49 by agimi             #+#    #+#             */
/*   Updated: 2023/02/16 09:52:10 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	its_w(t_all *all, int x, int y)
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

int	can_move(t_all *all, char c)
{
	int	x;
	int	y;

	x = all->px;
	y = all->py + 27;
	if (c == 'd')
		y += 3;
	if (c == 'u')
		y -= 3;
	if (c == 'l')
		x -= 3;
	if (c == 'r')
		x += 3;
	if (its_w(all, x, y))
		return (0);
	return (1);
}
