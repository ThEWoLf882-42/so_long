/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:59:18 by agimi             #+#    #+#             */
/*   Updated: 2023/03/06 11:59:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	an;
	char	*as;
	int		anega;

	size = count_size((long) n);
	as = (char *) malloc(size + 1);
	if (!as)
		return (0);
	an = (long) n;
	anega = 0;
	if (an < 0)
	{
		an = an * (-1);
		as[0] = '-';
		anega = 1;
	}
	as[size] = '\0';
	while (size > (size_t) anega)
	{
		as[size - 1] = an % 10 + '0';
		an = an / 10;
		size--;
	}
	return (as);
}
