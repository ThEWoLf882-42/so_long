/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_coin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:34:00 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 19:03:11 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	its_coin(t_all *all)
{
	t_codb	*t;

	t = all->codb->next;
	while (t)
	{
		if (all->px == (all->codb->cx * 69) && all->py == (all->codb->cy * 69))
		{
			mlx_image_to_window(all->mlx, all->grass.grass, \
				(all->codb->cx * 69), (all->codb->cy * 69));
			all->coin.cc++;
		}
	}
	if (all->coin.cc == all->coin.cn)
		exit_e(all);
}
