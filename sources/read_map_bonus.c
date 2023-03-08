/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:10:59 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 12:57:59 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sete(t_all *all, int x, int y)
{
	if (all->ene.ec != 0)
		get_out_s(all, "Sorry I can only handle one\n");
	all->ene.ex = x * 69;
	all->ene.ey = y * 69;
	all->ene.ec++;
}

int	cond(t_map *map, int x)
{
	if (map->s[x] != 'P' && map->s[x] != 'E' && map->s[x] != 'C'
		&& map->s[x] != '1' && map->s[x] != '0' && map->s[x] != 'N')
		return (1);
	return (0);
}

void	loop_b(t_all *all, t_map *map, int y)
{
	int	x;

	while (--y)
	{
		x = 0;
		while (map->s[++x] && x < all->mpx - 1)
		{
			if (map->s[x] == 'N')
				sete(all, x, (all->mpy - y - 1));
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
			if (cond(map, x))
				get_out_s(all, "Kteb Mzyane\n");
		}
		map = map->next;
	}
}

void	read_map_b(t_all *all)
{
	int		y;
	t_map	*t;

	t = all->map->next;
	y = all->mpy - 1;
	all->ene.ec = 0;
	loop_b(all, t, y);
	check_map(all, all->map);
	if (!all->player.pc || !all->exit.exc || !all->coin.cn || !all->ene.ec)
		get_out_s(all, "Noop\nI don't want you to play 😝😝😝😝😝😝😝😝😝\n");
}
