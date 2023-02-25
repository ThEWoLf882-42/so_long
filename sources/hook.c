/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:00:07 by agimi             #+#    #+#             */
/*   Updated: 2023/02/24 20:04:00 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count(t_all *all)
{
	int	x;
	int	y;

	x = all->px - all->pxt;
	y = all->py - all->pyt;
	if (x >= 69 || x <= -69 || y >= 69 || y <= -69)
	{
		all->nm++;
		all->pxt = all->px;
		all->pyt = all->py;
		ft_putstr_fd("Moves = ", 1);
		ft_putnbr_fd(all->nm, 1);
		ft_putchar_fd('\n', 1);
	}
}

void	hook(void *gg)
{
	t_all	*all;

	all = (t_all *)gg;
	if (mlx_is_key_down(all->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(all->mlx);
	else if (mlx_is_key_down(all->mlx, MLX_KEY_UP))
		uloop(all);
	else if (mlx_is_key_down(all->mlx, MLX_KEY_DOWN))
		dloop(all);
	else if (mlx_is_key_down(all->mlx, MLX_KEY_LEFT))
		lloop(all);
	else if (mlx_is_key_down(all->mlx, MLX_KEY_RIGHT))
		rloop(all);
	count(all);
	its_coin(all);
	get_out(all);
}
