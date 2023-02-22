/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:10:24 by agimi             #+#    #+#             */
/*   Updated: 2023/02/22 12:13:45 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_map(t_all *all, char **av)
{
	int	i;

	i = ft_strlen(av[1]) - 1;
	if (av[1][i - 3] != '.' || av[1][i - 2] != 'b'
		|| av[1][i - 1] != 'e' || av[1][i] != 'r')
		get_out_s(all, "Hey You\nWhere is the beeeeer\n");
	all->fd = open(av[1], O_RDWR);
	if (all->fd == -1)
		get_out_s(all, "OPEN F.A.I.L\n");
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
	free(m);
	all->mpy = ft_lstsize(all->map);
	all->player.pc = 0;
	all->exit.exc = 0;
	all->coin.cn = 0;
	all->codb = ft_lstnew_c(0, 0);
	all->wadb = ft_lstnew_w(0, 0);
	if (all->mpx * 69 > WIDTH || (all->mpy) * 69 > HEIGHT)
		get_out_s(all, "\"OOOH\nThat's TOOO Big\"\nThat's what she said...\n");
}
