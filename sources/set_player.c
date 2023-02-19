/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:49:18 by agimi             #+#    #+#             */
/*   Updated: 2023/02/18 13:23:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_player(t_all *all, int x, int y)
{
	if (all->player.pc != 0)
		get_out_s(all, "To Many Player\n");
	all->px = x * 69;
	all->py = y * 69 - 27;
	all->player.pc++;
}
