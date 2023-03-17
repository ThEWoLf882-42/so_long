/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_p_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:01:49 by agimi             #+#    #+#             */
/*   Updated: 2023/03/17 15:10:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	xpm(t_all *all)
{
	if (!all->mv.down.d1 || !all->mv.down.d0 || !all->mv.down.d2
		|| !all->mv.up.u1 || !all->mv.up.u0 || !all->mv.up.u2
		|| !all->mv.right.r1 ||!all->mv.right.r0 || !all->mv.right.r2
		|| !all->mv.left.l1 || !all->mv.left.l0 || !all->mv.left.l2)
		get_out_s(all, "XPMMMM'S\n");
}

void	load_p_xpm(t_all *all)
{
	all->mv.down.d1 = mlx_load_xpm42("./xpm/D1.xpm42");
	all->mv.down.d0 = mlx_load_xpm42("./xpm/D0.xpm42");
	all->mv.down.d2 = mlx_load_xpm42("./xpm/D2.xpm42");
	all->mv.up.u1 = mlx_load_xpm42("./xpm/U1.xpm42");
	all->mv.up.u0 = mlx_load_xpm42("./xpm/U0.xpm42");
	all->mv.up.u2 = mlx_load_xpm42("./xpm/U2.xpm42");
	all->mv.right.r1 = mlx_load_xpm42("./xpm/R1.xpm42");
	all->mv.right.r0 = mlx_load_xpm42("./xpm/R0.xpm42");
	all->mv.right.r2 = mlx_load_xpm42("./xpm/R2.xpm42");
	all->mv.left.l1 = mlx_load_xpm42("./xpm/L1.xpm42");
	all->mv.left.l0 = mlx_load_xpm42("./xpm/L0.xpm42");
	all->mv.left.l2 = mlx_load_xpm42("./xpm/L2.xpm42");
	xpm(all);
}
