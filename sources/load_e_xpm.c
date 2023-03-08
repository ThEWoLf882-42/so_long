/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_e_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:13:11 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 13:01:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_e1(t_all *all)
{
	all->ene.ed0 = mlx_load_xpm42("./xpm/E1D0.xpm42");
	all->ene.ed1 = mlx_load_xpm42("./xpm/E1D1.xpm42");
	all->ene.ed2 = mlx_load_xpm42("./xpm/E1D2.xpm42");
	all->ene.ed3 = mlx_load_xpm42("./xpm/E1D3.xpm42");
	all->ene.el0 = mlx_load_xpm42("./xpm/E1L0.xpm42");
	all->ene.el1 = mlx_load_xpm42("./xpm/E1L1.xpm42");
	all->ene.el2 = mlx_load_xpm42("./xpm/E1L2.xpm42");
	all->ene.el3 = mlx_load_xpm42("./xpm/E1L3.xpm42");
	all->ene.er0 = mlx_load_xpm42("./xpm/E1R0.xpm42");
	all->ene.er1 = mlx_load_xpm42("./xpm/E1R1.xpm42");
	all->ene.er2 = mlx_load_xpm42("./xpm/E1R2.xpm42");
	all->ene.er3 = mlx_load_xpm42("./xpm/E1R3.xpm42");
	all->ene.eu0 = mlx_load_xpm42("./xpm/E1U0.xpm42");
	all->ene.eu1 = mlx_load_xpm42("./xpm/E1U1.xpm42");
	all->ene.eu2 = mlx_load_xpm42("./xpm/E1U2.xpm42");
	all->ene.eu3 = mlx_load_xpm42("./xpm/E1U3.xpm42");
	all->ene.esp = 6;
}

void	load_e2(t_all *all)
{
	all->ene.ed0 = mlx_load_xpm42("./xpm/E2D0.xpm42");
	all->ene.ed1 = mlx_load_xpm42("./xpm/E2D1.xpm42");
	all->ene.ed2 = mlx_load_xpm42("./xpm/E2D2.xpm42");
	all->ene.ed3 = mlx_load_xpm42("./xpm/E2D3.xpm42");
	all->ene.el0 = mlx_load_xpm42("./xpm/E2L0.xpm42");
	all->ene.el1 = mlx_load_xpm42("./xpm/E2L1.xpm42");
	all->ene.el2 = mlx_load_xpm42("./xpm/E2L2.xpm42");
	all->ene.el3 = mlx_load_xpm42("./xpm/E2L3.xpm42");
	all->ene.er0 = mlx_load_xpm42("./xpm/E2R0.xpm42");
	all->ene.er1 = mlx_load_xpm42("./xpm/E2R1.xpm42");
	all->ene.er2 = mlx_load_xpm42("./xpm/E2R2.xpm42");
	all->ene.er3 = mlx_load_xpm42("./xpm/E2R3.xpm42");
	all->ene.eu0 = mlx_load_xpm42("./xpm/E2U0.xpm42");
	all->ene.eu1 = mlx_load_xpm42("./xpm/E2U1.xpm42");
	all->ene.eu2 = mlx_load_xpm42("./xpm/E2U2.xpm42");
	all->ene.eu3 = mlx_load_xpm42("./xpm/E2U3.xpm42");
	all->ene.esp = 9;
}

void	load_e3(t_all *all)
{
	all->ene.ed0 = mlx_load_xpm42("./xpm/E3D0.xpm42");
	all->ene.ed1 = mlx_load_xpm42("./xpm/E3D1.xpm42");
	all->ene.ed2 = mlx_load_xpm42("./xpm/E3D2.xpm42");
	all->ene.ed3 = mlx_load_xpm42("./xpm/E3D3.xpm42");
	all->ene.el0 = mlx_load_xpm42("./xpm/E3L0.xpm42");
	all->ene.el1 = mlx_load_xpm42("./xpm/E3L1.xpm42");
	all->ene.el2 = mlx_load_xpm42("./xpm/E3L2.xpm42");
	all->ene.el3 = mlx_load_xpm42("./xpm/E3L3.xpm42");
	all->ene.er0 = mlx_load_xpm42("./xpm/E3R0.xpm42");
	all->ene.er1 = mlx_load_xpm42("./xpm/E3R1.xpm42");
	all->ene.er2 = mlx_load_xpm42("./xpm/E3R2.xpm42");
	all->ene.er3 = mlx_load_xpm42("./xpm/E3R3.xpm42");
	all->ene.eu0 = mlx_load_xpm42("./xpm/E3U0.xpm42");
	all->ene.eu1 = mlx_load_xpm42("./xpm/E3U1.xpm42");
	all->ene.eu2 = mlx_load_xpm42("./xpm/E3U2.xpm42");
	all->ene.eu3 = mlx_load_xpm42("./xpm/E3U3.xpm42");
	all->ene.esp = 12;
}
