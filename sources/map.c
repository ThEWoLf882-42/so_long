/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:10:24 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 18:11:47 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_map(t_all *all, char **av)
{
	all->fd = open(av[1], O_RDWR);
}

void	map(t_all *all, char **av)
{
	char	*s;
	t_map	*m;

	m = ft_lstnew(NULL);
	open_map(all, av);
	s = get_next_line(all->fd);
	all->mpx = ft_strlen(s) - 1;
	while (s)
	{
		ft_lstadd_back(m, ft_lstnew(s));
		s = get_next_line(all->fd);
	}
	all->map = m;
	all->mpy = ft_lstsize(all->map) - 1;
}
