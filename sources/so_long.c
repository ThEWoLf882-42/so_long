/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:47:29 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 17:35:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int32_t	main(int ac, char **av)
{
	t_all	all;
	(void)av;

	if (ac == 2)
	{
		map(&all, av);
		all.my.mlx = mlx_init(WIDTH, HEIGHT, "so_long", false);
		if (!all.my.mlx)
			return (EXIT_FAILURE);
		load_png(&all);
		all.my.player = mlx_texture_to_image(all.my.mlx, all.mv.down.d1);
		set_grass(&all);
		set_coin(&all);
		mlx_image_to_window(all.my.mlx, all.my.player, 0, 0);
		mlx_loop_hook(all.my.mlx, &hook, &all);
		mlx_loop(all.my.mlx);
		mlx_terminate(all.my.mlx);
		return (EXIT_SUCCESS);
	}
}
