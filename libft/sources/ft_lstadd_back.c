/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:41:46 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 15:55:44 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_map *a, t_map *new)
{
	if (!a || !new)
		return ;
	if (a)
		ft_lstlast(a)->next = new;
	else
		a = new;
}
