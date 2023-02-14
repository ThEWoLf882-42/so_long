/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:26:55 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 13:52:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <memory.h>
# include <fcntl.h>
# include "libft.h"
# include "MLX42/MLX42.h"
# define WIDTH 1920
# define HEIGHT 1080

typedef struct up
{
	mlx_texture_t	*u0;
	mlx_texture_t	*u1;
	mlx_texture_t	*u2;
}	t_up;

typedef struct down
{
	mlx_texture_t	*d0;
	mlx_texture_t	*d1;
	mlx_texture_t	*d2;
}	t_down;

typedef struct right
{
	mlx_texture_t	*r0;
	mlx_texture_t	*r1;
	mlx_texture_t	*r2;
}	t_right;

typedef struct left
{
	mlx_texture_t	*l0;
	mlx_texture_t	*l1;
	mlx_texture_t	*l2;
}	t_left;

typedef struct moves
{
	t_up	up;
	t_down	down;
	t_right	right;
	t_left	left;
}	t_moves;

typedef struct grass
{
	mlx_image_t		*grass;
	mlx_texture_t	*gras;
}	t_grass;

typedef struct coin
{
	mlx_image_t		*coin;
	mlx_texture_t	*coins;
	int				cn;
	int				cc;
}	t_collect;

typedef struct my_mlx
{
	mlx_t			*mlx;
	mlx_image_t		*player;
}	t_my_mlx;

typedef struct all
{
	t_my_mlx	my;
	t_moves		mv;
	int			px;
	int			py;
	int			mpx;
	int			mpy;
	int			fd;
	t_collect	coin;
	t_grass		grass;
	t_map		*map;
}	t_all;

void	lloop(t_all *all);
void	rloop(t_all *all);
void	uloop(t_all *all);
void	dloop(t_all *all);
void	load_png(t_all	*all);
void	hook(void *gg);
void	set_frame(t_all *all, int set);
void	set_grass(t_all *all);
void	set_coin(t_all *all);
void	map(t_all *all, char **av);

#endif