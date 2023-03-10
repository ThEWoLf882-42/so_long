/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_p_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:01:49 by agimi             #+#    #+#             */
/*   Updated: 2023/02/20 13:45:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
}

void	unload_p_xpm(t_all *all)
{
	mlx_delete_xpm42(all->mv.down.d1);
	mlx_delete_xpm42(all->mv.down.d0);
	mlx_delete_xpm42(all->mv.down.d2);
	mlx_delete_xpm42(all->mv.up.u1);
	mlx_delete_xpm42(all->mv.up.u0);
	mlx_delete_xpm42(all->mv.up.u2);
	mlx_delete_xpm42(all->mv.right.r1);
	mlx_delete_xpm42(all->mv.right.r0);
	mlx_delete_xpm42(all->mv.right.r2);
	mlx_delete_xpm42(all->mv.left.l1);
	mlx_delete_xpm42(all->mv.left.l0);
	mlx_delete_xpm42(all->mv.left.l2);
}
