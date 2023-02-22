/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:53:37 by agimi             #+#    #+#             */
/*   Updated: 2023/02/21 17:13:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_wadb(t_all *all)
{
	t_wadb	*t;
	t_wadb	*m;

	t = all->wadb;
	while (t)
	{
		m = t->next;
		free(t);
		t = m;
	}
}

void	the_free(t_all *all)
{
	free_map(all);
	free_codb(all);
	free_wadb(all);
}
