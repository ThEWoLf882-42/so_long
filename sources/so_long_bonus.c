/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:12:22 by agimi             #+#    #+#             */
/*   Updated: 2023/03/16 14:09:59 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int32_t	main(int ac, char **av)
{
	t_all	*all;

	if (ac == 2)
	{
		all = init(av);
		load_b(all);
		a_path_b(all);
		set_ene(all);
		mlx_key_hook(all->mlx, &hook_b, all);
		mlx_loop_hook(all->mlx, &ehook, all);
		mlx_loop(all->mlx);
		mlx_terminate(all->mlx);
		return (EXIT_SUCCESS);
	}
}
