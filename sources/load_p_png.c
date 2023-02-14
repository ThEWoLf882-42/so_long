/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_p_png.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:40:36 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 19:58:18 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_p_png(t_all *all)
{
	all->mv.down.d1 = mlx_load_png("./img/D1.png");
	all->mv.down.d0 = mlx_load_png("./img/D0.png");
	all->mv.down.d2 = mlx_load_png("./img/D2.png");
	all->mv.up.u1 = mlx_load_png("./img/U1.png");
	all->mv.up.u0 = mlx_load_png("./img/U0.png");
	all->mv.up.u2 = mlx_load_png("./img/U2.png");
	all->mv.right.r1 = mlx_load_png("./img/R1.png");
	all->mv.right.r0 = mlx_load_png("./img/R0.png");
	all->mv.right.r2 = mlx_load_png("./img/R2.png");
	all->mv.left.l1 = mlx_load_png("./img/L1.png");
	all->mv.left.l0 = mlx_load_png("./img/L0.png");
	all->mv.left.l2 = mlx_load_png("./img/L2.png");
	all->px = 3 * 69;
	all->py = 5 * 69;
}
