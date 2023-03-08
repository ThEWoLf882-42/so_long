/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ene.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:24:02 by agimi             #+#    #+#             */
/*   Updated: 2023/03/08 12:58:09 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_ene(t_all *all)
{
	all->ene.ene = mlx_texture_to_image(all->mlx, &all->ene.ed0->texture);
	mlx_image_to_window(all->mlx, all->ene.ene, all->ene.ex, all->ene.ey);
}
