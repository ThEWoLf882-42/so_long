/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 14:01:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	read_map(t_all *all)
{
	int	x;
	int	y;

	all->map = all->map->next;
	y = all->mpy - 1;
	while (--y)
	{
		x = 0;
		while (all->map->s[++x])
		{
			if (all->map->s[x] == 'P')
				set_player(all, x, y);
			if (all->map->s[x] == 'E')
				set_exit(all, x, y);
		}
		all->map = all->map->next;
	}
}
