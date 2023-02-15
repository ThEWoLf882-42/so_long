/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_coin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:55:13 by agimi             #+#    #+#             */
/*   Updated: 2023/02/15 14:57:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_coin(t_all *all)
{
	all->coin.coins = mlx_load_png("./img/C.png");
	all->coin.coin = mlx_texture_to_image(all->mlx, all->coin.coins);
}
