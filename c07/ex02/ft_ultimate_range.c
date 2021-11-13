/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:42:20 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/03 00:51:20 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*dest;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	dest = malloc((max - min) * sizeof(int));
	if (dest == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = dest;
	index = 0;
	while (index < (max - min))
	{
		dest[index] = min + index;
		index++;
	}
	return (max - min);
}
