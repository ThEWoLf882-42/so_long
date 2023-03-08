/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_path_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:10:42 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 12:13:03 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	kali_b(t_map *map, int x)
{
	map->s[x] = '1';
	if (map->s[x + 1] != '1')
		kali_b(map, x + 1);
	if (map->next->s[x] != '1')
		kali_b(map->next, x);
	if (map->s[x - 1] != '1')
		kali_b(map, x - 1);
	if (map->perv->s[x] != '1')
		kali_b(map->perv, x);
}

void	waaaah_b(t_all *all)
{
	t_map	*map;
	int		x;

	all->player.pct = 0;
	all->ene.ect = 0;
	all->exit.exct = 0;
	all->coin.cnt = 0;
	map = all->map;
	while (map)
	{
		x = -1;
		while (map->s[++x])
		{
			if (map->s[x] == 'P')
				all->player.pct++;
			if (map->s[x] == 'E')
				all->exit.exct++;
			if (map->s[x] == 'C')
				all->coin.cnt++;
			if (map->s[x] == 'N')
				all->ene.ect++;
		}
		map = map->next;
	}
}

void	a_path_b(t_all *all)
{
	t_map	*map;
	int		x;
	int		y;

	map = all->map;
	x = all->px / 69;
	y = (all->py + 27) / 69;
	while (y--)
		map = map->next;
	kali_b(map, x);
	waaaah_b(all);
	if (all->player.pct || all->exit.exct || all->coin.cnt || all->ene.ect)
		get_out_s(all, "LA 3afak LA 😶😶😶\n");
}
