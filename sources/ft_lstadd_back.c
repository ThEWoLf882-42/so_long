/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:41:46 by agimi             #+#    #+#             */
/*   Updated: 2023/02/24 19:57:21 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_lstadd_back_m(t_map *a, t_map *new)
{
	if (!a || !new)
		return ;
	if (a)
	{
		ft_lstlast_m(a)->next = new;
		ft_lstlast_m(a)->perv = ft_lstplast_m(a);
	}
	else
	{
		a = new;
		a->perv = NULL;
	}
}

void	ft_lstadd_back_w(t_wadb *a, t_wadb *new)
{
	if (!a || !new)
		return ;
	if (a)
		ft_lstlast_w(a)->next = new;
	else
		a = new;
}

void	ft_lstadd_back_c(t_codb *a, t_codb *new)
{
	if (!a || !new)
		return ;
	if (a)
		ft_lstlast_c(a)->next = new;
	else
		a = new;
}
