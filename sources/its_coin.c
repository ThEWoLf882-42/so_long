/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_coin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:34:00 by agimi             #+#    #+#             */
/*   Updated: 2023/02/17 13:02:04 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	its_coin(t_all *all)
{
	t_codb	*t;

	t = all->codb->next;
	while (t)
	{
		if (all->px >= (t->cx * 69) - 13 && all->px <= (t->cx * 69) + 69 - 13)
		{
			if (all->py + 27 >= (t->cy * 69) - 22 && all->py + 27 <= (t->cy * 69) - 22 + 69)
			{
				mlx_image_to_window(all->mlx, all->grass.grass, \
				(t->cx * 69), (t->cy * 69));
				mlx_image_to_window(all->mlx, all->player.player, \
				all->px, all->py);
				all->coin.cc++;
				t->cx = -1;
				t->cy = -1;
			}
		}
		t = t->next;
	}
	if (all->coin.cc == all->coin.cn)
		exit_e(all);
}
