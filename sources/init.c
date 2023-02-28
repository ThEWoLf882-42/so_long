/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:39:53 by agimi             #+#    #+#             */
/*   Updated: 2023/02/28 16:50:51 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_all	*init(char **av)
{
	t_all	*all;

	all = malloc(sizeof(t_all));
	map(all, av);
	all->mlx = mlx_init(all->mpx * 69, all->mpy * 69, "so_long", false);
	if (!all->mlx)
		exit(1);
	return (all);
}
