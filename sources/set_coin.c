/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_coin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:55:13 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 12:12:13 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_coin(t_all *all)
{
	all->coin.coins = mlx_load_png("./img/C.png");
	all->coin.coin = mlx_texture_to_image(all->my.mlx, all->coin.coins);
	mlx_image_to_window(all->my.mlx, all->coin.coin, 3 * 69, 5 * 69);
	mlx_image_to_window(all->my.mlx, all->coin.coin, 10 * 69, 7 * 69);
	// mlx_delete_image(all->my.mlx, all->coin.coin);
}
