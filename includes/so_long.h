/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:26:55 by agimi             #+#    #+#             */
/*   Updated: 2023/02/18 12:19:20 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <memory.h>
# include <fcntl.h>
# include "MLX42/MLX42.h"
# define WIDTH 1920
# define HEIGHT 1080
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 69
# endif

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
	mlx_texture_t	*gras1;
}	t_grass;

typedef struct coin
{
	mlx_image_t		*coin;
	mlx_texture_t	*coins;
	int				cn;
	int				cc;
}	t_coin;

typedef struct codb
{
	int			cx;
	int			cy;
	struct codb	*next;
}	t_codb;

typedef struct exit
{
	int				exc;
	int				ex;
	int				ey;
	mlx_texture_t	*eo;
	mlx_texture_t	*ec;
	mlx_image_t		*exit;
}	t_exit;

typedef struct wadb
{
	int			wx;
	int			wy;
	struct wadb	*next;
}	t_wadb;

typedef struct wall
{
	mlx_texture_t	*ruc;
	mlx_texture_t	*luc;
	mlx_texture_t	*rdc;
	mlx_texture_t	*ldc;
	mlx_texture_t	*mu;
	mlx_texture_t	*mr;
	mlx_texture_t	*ml;
	mlx_texture_t	*md;
	mlx_texture_t	*w;
	mlx_image_t		*wall;
}	t_wall;

typedef struct player
{
	int			pc;
	mlx_image_t	*player;
}	t_player;

typedef struct map
{
	char		*s;
	struct map	*next;
	struct map	*perv;
}	t_map;

typedef struct all
{
	t_player	player;
	t_moves		mv;
	mlx_t		*mlx;
	int			mpx;
	int			mpy;
	int			fd;
	int			px;
	int			py;
	int			nm;
	t_coin		coin;
	t_codb		*codb;
	t_grass		grass;
	t_map		*map;
	t_wall		wall;
	t_wadb		*wadb;
	t_exit		exit;
}	t_all;

void	lloop(t_all *all);
void	rloop(t_all *all);
void	uloop(t_all *all);
void	dloop(t_all *all);
void	load_p_png(t_all *all);
void	load_w_png(t_all *all);
void	hook(void *gg);
void	set_frame(t_all *all, int set);
void	set_grass(t_all *all);
void	set_coin(t_all *all);
void	set_s_wall(t_all *all);
void	map(t_all *all, char **av);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *naah, char *buff);
char	*thisone(char *naah);
char	*notthisone(char *naah);
char	*get_next_line(int fd);
t_map	*ft_lstnew_m(char *s);
t_wadb	*ft_lstnew_w(int x, int y);
t_codb	*ft_lstnew_c(int x, int y);
t_map	*ft_lstlast_m(t_map *lst);
t_wadb	*ft_lstlast_w(t_wadb *lst);
t_codb	*ft_lstlast_c(t_codb *lst);
int		ft_lstsize(t_map *lst);
void	ft_lstadd_back_m(t_map *a, t_map *new);
void	ft_lstadd_back_w(t_wadb *a, t_wadb *new);
void	ft_lstadd_back_c(t_codb *a, t_codb *new);
void	read_map(t_all *all);
void	set_player(t_all *all, int x, int y);
void	set_exit(t_all *all, int x, int y);
int		can_move(t_all *all, char c);
void	exit_e(t_all *all);
void	move(t_all *all, char c);
void	its_coin(t_all *all);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	get_out(t_all *all);

#endif