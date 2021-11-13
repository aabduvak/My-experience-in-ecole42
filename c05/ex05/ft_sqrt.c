/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:19:26 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/31 13:34:20 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	index;

	index = 0;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (index * index <= (unsigned int)nb)
	{
		index++;
	}
	index -= 1;
	if (index * index == (unsigned int)nb)
		return (index);
	return (0);
}
