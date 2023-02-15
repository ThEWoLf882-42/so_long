/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:47:29 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 17:19:30 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int32_t	main(int ac, char **av)
{
	t_all	*all;

	if (ac == 2)
	{
		all = malloc(sizeof(t_all));
		map(all, av);
		all->mlx = mlx_init(all->mpx * 69, all->mpy * 69, "so_long", false);
		if (!all->mlx)
			return (EXIT_FAILURE);
		load_p_png(all);
		set_grass(all);
		set_s_wall(all);
		read_map(all);
		set_coin(all);
		all->player.player = mlx_texture_to_image(all->mlx, all->mv.down.d1);
		mlx_image_to_window(all->mlx, all->player.player, all->px, all->py);
		mlx_loop_hook(all->mlx, &hook, all);
		mlx_loop(all->mlx);
		mlx_terminate(all->mlx);
		return (EXIT_SUCCESS);
	}
}
