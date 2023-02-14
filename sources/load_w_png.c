/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_w_png.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:40:36 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 19:05:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_w_png(t_all *all)
{
	all->wall.ruc = mlx_load_png("./img/W3.png");
	all->wall.luc = mlx_load_png("./img/W7.png");
	all->wall.rdc = mlx_load_png("./img/W4.png");
	all->wall.ldc = mlx_load_png("./img/W8.png");
	all->wall.mu = mlx_load_png("./img/W5.png");
	all->wall.mr = mlx_load_png("./img/W13.png");
	all->wall.ml = mlx_load_png("./img/W1.png");
	all->wall.md = mlx_load_png("./img/W6.png");
}
