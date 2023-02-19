/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:26:55 by agimi             #+#    #+#             */
/*   Updated: 2023/02/19 20:25:00 by agimi            ###   ########.fr       */
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
# define WIDTH 2560
# define HEIGHT 1440
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 69
# endif

typedef struct up
{
	xpm_t	*u0;
	xpm_t	*u1;
	xpm_t	*u2;
}	t_up;

typedef struct down
{
	xpm_t	*d0;
	xpm_t	*d1;
	xpm_t	*d2;
}	t_down;

typedef struct right
{
	xpm_t	*r0;
	xpm_t	*r1;
	xpm_t	*r2;
}	t_right;

typedef struct left
{
	xpm_t	*l0;
	xpm_t	*l1;
	xpm_t	*l2;
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
	mlx_image_t	*grass;
	xpm_t		*gras1;
}	t_grass;

typedef struct coin
{
	mlx_image_t	*coin;
	xpm_t		*coins;
	int			cn;
	int			cc;
}	t_coin;

typedef struct codb
{
	int			cx;
	int			cy;
	struct codb	*next;
}	t_codb;

typedef struct exit
{
	int			exc;
	int			ex;
	int			ey;
	xpm_t		*eo;
	xpm_t		*ec;
	mlx_image_t	*exit;
}	t_exit;

typedef struct wadb
{
	int			wx;
	int			wy;
	struct wadb	*next;
}	t_wadb;

typedef struct wall
{
	xpm_t		*luc;
	xpm_t		*rdc;
	xpm_t		*ldc;
	xpm_t		*ruc;
	xpm_t		*mu;
	xpm_t		*mr;
	xpm_t		*ml;
	xpm_t		*md;
	xpm_t		*w;
	mlx_image_t	*wall;
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
void	load_p_xpm(t_all *all);
void	load_w_xpm(t_all *all);
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
void	get_out_s(t_all *all, char *s);
void	chech_map(t_all *all, t_map *m);

#endif