/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_print_letter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:37:27 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:37:27 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_create_number.h"
#include "ft_struct.h"
#include "ft_itoa.h"
#include "ft_print.h"
#include "ft_convert_number.h"
#include "ft_get_digit_count.h"
#include "ft_atoi.h"
#include "ft_str_copy.h"
#include "ft_pow.h"
#include "ft_str.h"
#include "ft_set_num.h"
#include "ft_print_letter.h"

void	ft_print_letter(t_number *number, char **lines)
{
	if (number->digit_count == 0)
		return ;
	else if (ft_strlen(number->s_value) > 1 && number->s_value[0] == '0')
		number->s_value = ft_itoa(number->i_value);
	if (number->i_value <= 19)
		ft_print_number(number, lines);
	else if (number->i_value >= 20 && number->i_value <= 99)
		ft_set_second_digit(number, lines);
	else if (number->digit_count == 3)
		ft_set_third_digit(number, lines);
	else if (number->digit_count > 3)
		ft_set_others(number, lines);
}
