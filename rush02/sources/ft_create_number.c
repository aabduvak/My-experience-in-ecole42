/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:32:35 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:32:35 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_struct.h"
#include "ft_str.h"
#include "ft_atoi.h"
#include "ft_get_digit_count.h"
#include "ft_create_number.h"

t_number	*ft_create_number(char *number)
{
	t_number	*ret;

	ret = (t_number *)malloc(sizeof(t_number));
	ret->s_value = ft_strdup(number);
	ret->i_value = ft_atoi(number);
	ret->digit_count = ft_get_digit_count(ret->i_value);
	return (ret);
}
