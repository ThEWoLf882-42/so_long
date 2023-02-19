/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_coin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:55:13 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:21:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_coin(t_all *all)
{
	t_codb	*t;

	t = all->codb->next;
	all->coin.coins = mlx_load_xpm42("./xpm/C.xpm42");
	all->coin.coin = mlx_texture_to_image(all->mlx, &all->coin.coins->texture);
	while (t)
	{
		mlx_image_to_window(all->mlx, all->coin.coin, \
			t->cx * 69, t->cy * 69);
		t = t->next;
	}
}

