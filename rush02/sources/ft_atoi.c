/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:49:37 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 02:49:37 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skip.h"
#include "ft_atoi.h"
#include <stdio.h>

unsigned int	ft_atoi(char *str)
{
	unsigned long	ret;
	int				index;

	ret = 0;
	index = ft_skip(str, 0);
	if (str[index] == '+')
		index++;
	while (str[index])
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
			return (0);
		ret = ret * 10 + (str[index++] - '0');
	}
	if (ret > 4294967295)
		return (0);
	return (ret);
}
