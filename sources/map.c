/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:10:24 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 15:59:02 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_map(t_all *all, char **av)
{
	all->fd = open(av[1], O_RDWR);
	printf("av[1] = %s\n", av[1]);
	printf("fd = %d\n", all->fd);
}

void	map(t_all *all, char **av)
{
	char	*s;
	t_map	*m;

	open_map(all, av);
	s = get_next_line(all->fd);
	all->mpx = ft_strlen(s);
	while (s)
	{
		printf("row = %s", s);
		ft_lstadd_back(all->map, ft_lstnew(s));
		s = get_next_line(all->fd);
	}
	// all->mpy = ft_lstsize(all->map);
	// while (all->map)
	// {
	// 	printf("row = %s\n", all->map->s);
	// 	all->map = all->map->next;
	// }
}
