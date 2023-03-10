/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 12:36:39 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	loop(t_all *all, t_map *map, int y)
{
	int	x;

	while (--y)
	{
		x = 0;
		while (map->s[++x] && x < all->mpx - 1)
		{
			if (map->s[x] == 'P')
				set_player(all, x, (all->mpy - y - 1));
			if (map->s[x] == 'E')
				set_exit(all, x, (all->mpy - y - 1));
			if (map->s[x] == '1')
				ft_lstadd_back_w(all->wadb, ft_lstnew_w(x, (all->mpy - y - 1)));
			if (map->s[x] == 'C')
			{
				ft_lstadd_back_c(all->codb, ft_lstnew_c(x, (all->mpy - y - 1)));
				all->coin.cn++;
			}
			if (map->s[x] != 'P' && map->s[x] != 'E' && map->s[x] != 'C'
				&& map->s[x] != '1' && map->s[x] != '0')
				get_out_s(all, "Kteb Mzyane\n");
		}
		map = map->next;
	}
}

void	read_map(t_all *all)
{
	int		y;
	t_map	*t;

	t = all->map->next;
	y = all->mpy - 1;
	loop(all, t, y);
	check_map(all, all->map);
	if (!all->player.pc || !all->exit.exc || !all->coin.cn)
		get_out_s(all, "Noop\nI don't want you to play 😝😝😝😝😝😝😝😝😝\n");
}
