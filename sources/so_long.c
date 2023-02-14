/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:47:29 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 20:00:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int32_t	main(int ac, char **av)
{
	t_all	all;

	if (ac == 2)
	{
		map(&all, av);
		all.my.mlx = mlx_init(all.mpx * 69, all.mpy * 69, "so_long", false);
		if (!all.my.mlx)
			return (EXIT_FAILURE);
		load_p_png(&all);
		all.my.player = mlx_texture_to_image(all.my.mlx, all.mv.down.d1);
		set_grass(&all);
		set_wall(&all);
		set_coin(&all);
		mlx_image_to_window(all.my.mlx, all.my.player, all.px, all.py);
		mlx_loop_hook(all.my.mlx, &hook, &all);
		mlx_loop(all.my.mlx);
		mlx_terminate(all.my.mlx);
		return (EXIT_SUCCESS);
	}
}
