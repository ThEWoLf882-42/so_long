/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:47:47 by agimi             #+#    #+#             */
/*   Updated: 2023/02/21 14:44:36 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	up_do_ch(t_all *all, t_map *m)
{
	int	i;

	i = -1;
	while (m->s[++i] && i < all->mpx)
		if (m->s[i] != '1')
			get_out_s(all, "What kind of walls this is\n");
	m = ft_lstlast_m(m);
	i = -1;
	if ((int)ft_strlen(m->s) != all->mpx)
		get_out_s(all, "Really!!\nnot a nice size you have...\n");
	while (m->s[++i] && i < all->mpx)
		if (m->s[i] != '1')
			get_out_s(all, "What kind of walls this is\n");
}

void	corner_ch(t_all *all, t_map *m)
{
	int	i;

	m = m->next;
	i = 0;
	while (++i < all->mpy - 1)
	{
		if ((int)ft_strlen(m->s) - 1 != all->mpx)
			get_out_s(all, "Really!!\nnot a nice size you have...\n");
		if (m->s[0] != '1' || m->s[all->mpx - 1] != '1')
			get_out_s(all, "What kind of walls this is\n");
		m = m->next;
	}
}

void	check_map(t_all *all, t_map *m)
{
	up_do_ch(all, m);
	corner_ch(all, m);
}
