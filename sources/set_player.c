/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:49:18 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 15:02:53 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_player(t_all *all, int x, int y)
{
	if (all->player.pc != 0)
		write(1, "To Many Player\n", 15);
	all->px = x * 69;
	all->py = (all->mpy - y - 1) * 69 - 27;
	all->player.pc++;
}
