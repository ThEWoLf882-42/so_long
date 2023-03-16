/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_w_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:02:24 by agimi             #+#    #+#             */
/*   Updated: 2023/03/16 12:04:18 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	xpm(t_all *all)
{
	if (!all->wall.ruc || !all->wall.luc || !all->wall.rdc || !all->wall.ldc
		|| !all->wall.mu || !all->wall.mr || !all->wall.ml
		|| !all->wall.md || !all->wall.w)
		get_out_s(all, "XPMMMM'S|\n");
}

void	load_w_xpm(t_all *all)
{
	all->wall.ruc = mlx_load_xpm42("./xpm/RUC.xpm42");
	all->wall.luc = mlx_load_xpm42("./xpm/LUC.xpm42");
	all->wall.rdc = mlx_load_xpm42("./xpm/RDC.xpm42");
	all->wall.ldc = mlx_load_xpm42("./xpm/LDC.xpm42");
	all->wall.mu = mlx_load_xpm42("./xpm/MU.xpm42");
	all->wall.mr = mlx_load_xpm42("./xpm/MR.xpm42");
	all->wall.ml = mlx_load_xpm42("./xpm/ML.xpm42");
	all->wall.md = mlx_load_xpm42("./xpm/MD.xpm42");
	all->wall.w = mlx_load_xpm42("./xpm/W.xpm42");
	xpm(all);
}
