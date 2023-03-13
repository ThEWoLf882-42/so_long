/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:26:55 by agimi             #+#    #+#             */
/*   Updated: 2023/03/13 15:32:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "MLX42/MLX42.h"
# define WIDTH 3200
# define HEIGHT 1800
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
	int			cnt;
	int			cc;
	int			cp;
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
	int			exct;
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
	int			pct;
	mlx_image_t	*player;
}	t_player;

typedef struct enemie
{
	int			ex;
	int			ey;
	int			esp;
	int			ec;
	int			ect;
	xpm_t		*ed0;
	xpm_t		*ed1;
	xpm_t		*ed2;
	xpm_t		*ed3;
	xpm_t		*el0;
	xpm_t		*el1;
	xpm_t		*el2;
	xpm_t		*el3;
	xpm_t		*er0;
	xpm_t		*er1;
	xpm_t		*er2;
	xpm_t		*er3;
	xpm_t		*eu0;
	xpm_t		*eu1;
	xpm_t		*eu2;
	xpm_t		*eu3;
	mlx_image_t	*ene;
}	t_ene;

typedef struct map
{
	char		*s;
	struct map	*next;
	struct map	*perv;
}	t_map;

typedef struct all
{
	t_player	player;
	t_ene		ene;
	t_moves		mv;
	mlx_t		*mlx;
	int			mpx;
	int			mpy;
	int			fd;
	int			px;
	int			py;
	int			pxt;
	int			pyt;
	int			nm;
	t_coin		coin;
	t_codb		*codb;
	t_grass		grass;
	t_map		*map;
	t_wall		wall;
	t_wadb		*wadb;
	t_exit		exit;
	mlx_image_t	*mc;
}	t_all;

void	lloop(t_all *all);
void	rloop(t_all *all);
void	uloop(t_all *all);
void	dloop(t_all *all);
void	load_p_xpm(t_all *all);
void	unload_p_xpm(t_all *all);
void	load_w_xpm(t_all *all);
void	unload_w_xpm(t_all *all);
void	hook(void *gg);
void	hook_b(void *gg);
void	set_frame(t_all *all, int set);
void	set_grass(t_all *all);
void	set_coin(t_all *all);
void	set_s_wall(t_all *all);
void	map(t_all *all, char **av);
void	free_map(t_all *all);
char	*ft_itoa(int n);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *naah, char *buff);
char	*thisone(char *naah);
char	*notthisone(char *naah);
char	*get_next_line(int fd);
int		is_ascii(char c);
t_map	*ft_lstnew_m(char *s);
t_wadb	*ft_lstnew_w(int x, int y);
t_codb	*ft_lstnew_c(int x, int y);
t_map	*ft_lstlast_m(t_map *lst);
t_map	*ft_lstplast_m(t_map *lst);
t_wadb	*ft_lstlast_w(t_wadb *lst);
t_codb	*ft_lstlast_c(t_codb *lst);
int		ft_lstsize(t_map *lst);
void	ft_lstadd_back_m(t_map *a, t_map *new);
void	ft_lstadd_back_w(t_wadb *a, t_wadb *new);
void	ft_lstadd_back_c(t_codb *a, t_codb *new);
void	read_map(t_all *all);
void	read_map_b(t_all *all);
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
void	check_map(t_all *all, t_map *m);
void	free_codb(t_all *all);
void	the_free(t_all *all);
void	a_path(t_all *all);
void	a_path_b(t_all *all);
t_all	*init(char **av);
void	load(t_all *all);
void	load_b(t_all *all);
void	load_e1(t_all *all);
void	load_e2(t_all *all);
void	load_e3(t_all *all);
void	set_ene(t_all *all);
void	ehook(mlx_key_data_t k, void *gg);
int		can_move_e(t_all *all, char c);
int		its_w_e(t_all *all, int x, int y);
void	deloop(t_all *all);
void	leloop(t_all *all);
void	reloop(t_all *all);
void	ueloop(t_all *all);
void	loser(t_all *all);

#endif