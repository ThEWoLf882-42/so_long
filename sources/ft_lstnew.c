/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:41:56 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 11:58:07 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map	*ft_lstnew_m(char *s)
{
	t_map	*new;

	new = malloc(sizeof(t_map));
	if (!new)
		return (NULL);
	new->s = s;
	new->next = NULL;
	return (new);
}

t_wadb	*ft_lstnew_w(int x, int y)
{
	t_wadb	*new;

	new = malloc(sizeof(t_wadb));
	if (!new)
		return (NULL);
	new->wx = x * 69;
	new->wy = y * 69;
	new->next = NULL;
	return (new);
}

t_codb	*ft_lstnew_c(int x, int y)
{
	t_codb	*new;

	new = malloc(sizeof(t_codb));
	if (!new)
		return (NULL);
	new->cx = x;
	new->cy = y;
	new->next = NULL;
	return (new);
}
