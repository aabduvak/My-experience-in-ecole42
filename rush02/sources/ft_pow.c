/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:57:54 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:57:54 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pow.h"

int	ft_pow(int base, int nb)
{
	int	res;
	int	index;

	res = 1;
	index = 0;
	if (nb < 0)
		return (0);
	while (index < nb)
	{
		res = res * base;
		index++;
	}
	return (res);
}
