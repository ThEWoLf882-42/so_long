/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_out.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:13:13 by agimi             #+#    #+#             */
/*   Updated: 2023/02/18 12:25:08 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_out(t_all *all)
{
	if (all->px == all->exit.ex && all->py + 27 == all->exit.ey)
	{
		if (all->coin.cc == -69)
		{
			ft_putstr_fd("You Won!!\nWhat a great player you are...😒\n", 1);
			mlx_close_window(all->mlx);
		}
	}
}
