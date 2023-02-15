/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:41:46 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 16:59:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_lstadd_back(t_map *a, t_map *new)
{
	if (!a || !new)
		return ;
	if (a)
		ft_lstlast(a)->next = new;
	else
		a = new;
}