/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 08:03:47 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/31 08:26:24 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
	{
		result = 1;
	}
	else if (power < 0)
	{
		result = 0;
	}
	else
	{
		result = nb;
		while (power != 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
