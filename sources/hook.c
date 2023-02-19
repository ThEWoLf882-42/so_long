/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:00:07 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:32:10 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	its_coin(all);
	get_out(all);
}
