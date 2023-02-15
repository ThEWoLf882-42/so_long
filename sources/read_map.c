/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 18:46:02 by agimi            ###   ########.fr       */
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
				set_player(all, x, (all->mpy - y - 1));
			if (all->map->s[x] == 'E')
				set_exit(all, x, (all->mpy - y - 1));
			if (all->map->s[x] == '1')
				ft_lstadd_back_w(all->wadb, ft_lstnew_w(x * 69, \
					(all->mpy - y - 1) * 69));
			if (all->map->s[x] == 'C')
			{
				ft_lstadd_back_c(all->codb, ft_lstnew_c(x, (all->mpy - y - 1)));
				all->coin.cn++;
			}
		}
		all->map = all->map->next;
	}
}
