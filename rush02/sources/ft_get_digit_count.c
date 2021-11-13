/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digit_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:12:50 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:12:50 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_digit_count.h"

int	ft_get_digit_count(unsigned int number)
{
	int	ret;

	ret = 0;
	while (number > 0)
	{
		ret++;
		number /= 10;
	}
	return (ret);
}
