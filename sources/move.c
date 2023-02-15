/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:29:21 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 19:45:53 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move(t_all *all, char c)
{
	int	x;
	int	y;
	int	xm;
	int	ym;

	x = all->px;
	y = all->py;
	if (!can_move(all, c))
		return ;
	if (c == 'd')
		dloop(all);
	if (c == 'u')
		uloop(all);
	if (c == 'l')
		lloop(all);
	if (c == 'r')
		rloop(all);
	its_coin(all);
	xm = x - all->px;
	ym = y - all->px;
	if (xm == 69 || xm == 69 || ym == 69 || ym == -69)
	{
		all->nm++;
		printf("moves = %d", all->nm);
	}
}
