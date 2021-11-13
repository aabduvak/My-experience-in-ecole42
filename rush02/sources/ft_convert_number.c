/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:55:56 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 02:55:56 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_str.h"
#include "ft_convert_number.h"

char	*ft_convert_number(t_number *number)
{
	char	*ret;
	int		digit;

	ret = ft_strdup(number->s_value);
	digit = number->digit_count;
	if (digit >= 3)
		ret[0] = '1';
	digit--;
	while (digit > 0)
	{
		ret[digit--] = '0';
	}
	return (ret);
}
