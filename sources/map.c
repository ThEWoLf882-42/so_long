/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:10:24 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 17:50:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_map(t_all *all, char **av)
{
	all->fd = open(av[1], O_RDWR);
}

void	set_perv(t_all *all)
{
	t_map	*m;
	t_map	*t;

	m = all->map->next;
	t = all->map;
	while (m)
	{
		m->perv = all->map;
		m = m->next;
		all->map = all->map->next;
	}
	all->map = t;
}

void	map(t_all *all, char **av)
{
	char	*s;
	t_map	*m;

	m = ft_lstnew_m(NULL);
	open_map(all, av);
	s = get_next_line(all->fd);
	all->mpx = ft_strlen(s) - 1;
	while (s)
	{
		ft_lstadd_back_m(m, ft_lstnew_m(s));
		s = get_next_line(all->fd);
	}
	all->map = m->next;
	all->mpy = ft_lstsize(all->map);
	set_perv(all);
	all->player.pc = 0;
	all->exit.exc = 0;
	all->coin.cn = 0;
	all->codb = ft_lstnew_c(0, 0);
	all->wadb = ft_lstnew_w(0, 0);
}
