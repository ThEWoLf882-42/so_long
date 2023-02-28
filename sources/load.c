/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:45:24 by agimi             #+#    #+#             */
/*   Updated: 2023/02/28 17:16:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load(t_all *all)
{
	load_p_xpm(all);
	set_grass(all);
	read_map(all);
	set_s_wall(all);
	set_coin(all);
	all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.down.d1->texture);
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
}
