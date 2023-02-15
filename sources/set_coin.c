/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_coin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:55:13 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 18:42:48 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_coin(t_all *all)
{
	t_codb	*t;

	t = all->codb->next;
	all->coin.coins = mlx_load_png("./img/C.png");
	all->coin.coin = mlx_texture_to_image(all->mlx, all->coin.coins);
	while (t)
	{
		mlx_image_to_window(all->mlx, all->coin.coin, \
			t->cx * 69, t->cy * 69);
		t = t->next;
	}
}

