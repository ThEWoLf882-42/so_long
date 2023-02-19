/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_w_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:02:24 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 18:20:14 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_w_xpm(t_all *all)
{
	all->wall.ruc = mlx_load_xpm42("./xpm/RUC.xpm42");
	all->wall.luc = mlx_load_xpm42("./xpm/LUC.xpm42");
	all->wall.rdc = mlx_load_xpm42("./xpm/W4.xpm42");
	all->wall.ldc = mlx_load_xpm42("./xpm/W8.xpm42");
	all->wall.mu = mlx_load_xpm42("./xpm/MU.xpm42");
	all->wall.mr = mlx_load_xpm42("./xpm/W13.xpm42");
	all->wall.ml = mlx_load_xpm42("./xpm/W1.xpm42");
	all->wall.md = mlx_load_xpm42("./xpm/W6.xpm42");
	all->wall.w = mlx_load_xpm42("./xpm/W.xpm42");
}
