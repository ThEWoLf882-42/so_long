/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:45:24 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 12:57:22 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_b(t_all *all)
{
	load_p_xpm(all);
	set_grass(all);
	read_map_b(all);
	set_s_wall(all);
	set_coin(all);
	load_e1(all);
	all->player.player = mlx_texture_to_image(all->mlx, \
		&all->mv.down.d1->texture);
	mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
}
