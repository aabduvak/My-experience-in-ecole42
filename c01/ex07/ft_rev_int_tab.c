/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:50:19 by scoskun           #+#    #+#             */
/*   Updated: 2021/10/26 21:29:47 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	rev[999999];
	int	i;

	index = size - 1;
	i = 0;
	while (index >= 0)
	{
		rev[i] = tab[index];
		i++;
		index--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = rev[i];
		i++;
	}
}
