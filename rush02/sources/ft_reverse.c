/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:26:35 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:26:35 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_reverse.h"

void	ft_reverse(char str[], int length)
{
	int		start;
	int		end;
	char	chr;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		chr = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = chr;
		start++;
		end--;
	}
}
