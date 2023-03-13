/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:47:29 by agimi             #+#    #+#             */
/*   Updated: 2023/03/13 15:02:49 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int32_t	main(int ac, char **av)
{
	t_all	*all;

	if (ac == 2)
	{
		all = init(av);
		load(all);
		a_path(all);
		mlx_loop_hook(all->mlx, &hook, all);
		mlx_loop(all->mlx);
		mlx_terminate(all->mlx);
		return (EXIT_SUCCESS);
	}
}
