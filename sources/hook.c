/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:00:07 by agimi             #+#    #+#             */
/*   Updated: 2023/02/18 12:12:46 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	hook(void *gg)
{
	t_all	*all;
	int		x;
	int		y;
	int		xm;
	int		ym;

	all = (t_all *)gg;
	x = all->px;
	y = all->py;
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
	its_coin(all);
	get_out(all);
	xm = x - all->px;
	ym = y - all->px;
	// if (xm == 69 || xm == 69 || ym == 69 || ym == -69)
	// {
	// 	all->nm++;
	// 	ft_putstr_fd("Moves = ", 1);
	// 	ft_putnbr_fd(all->nm, 1);
	// 	ft_putchar_fd('\n', 1);
	// }
}
