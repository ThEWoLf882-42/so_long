/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:13:09 by agimi             #+#    #+#             */
/*   Updated: 2023/02/14 15:55:41 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "unistd.h"
# include "stdlib.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 69
# endif

typedef struct map
{
	char		*s;
	struct map	*next;
}	t_map;

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *naah, char *buff);
char	*thisone(char *naah);
char	*notthisone(char *naah);
char	*get_next_line(int fd);
t_map	*ft_lstnew(char *s);
t_map	*ft_lstlast(t_map *lst);
int		ft_lstsize(t_map *lst);
void	ft_lstadd_back(t_map *a, t_map *new);

#endif
