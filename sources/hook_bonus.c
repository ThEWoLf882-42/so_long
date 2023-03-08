/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:00:07 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 12:26:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_b(t_all *all)
{
	int		x;
	int		y;
	char	*str;

	x = all->px - all->pxt;
	y = all->py - all->pyt;
	if (x >= 69 || x <= -69 || y >= 69 || y <= -69)
	{
		all->nm++;
		all->pxt = all->px;
		all->pyt = all->py;
		str = ft_itoa(all->nm);
		mlx_delete_image(all->mlx, all->mc);
		all->mc = mlx_put_string(all->mlx, str, (all->mpx * 69) / 2, 20);
		free(str);
	}
}

void	hook_b(void *gg)
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
	count_b(all);
	its_coin(all);
	get_out(all);
}
