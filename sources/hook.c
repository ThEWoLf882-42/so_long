/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:00:07 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 14:56:04 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	hook(void *gg)
{
	t_all		*all;
	int			x;
	int			y;

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
}
