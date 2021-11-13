/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:20:33 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 21:30:19 by aabduvak         ###   ########.fr       */
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
#include "ft_print_letter.h"
#include "ft_set_num.h"

void	ft_set_second_digit(t_number *number, char **lines)
{
	char	*str;

	if (number->s_value[1] == '0')
	{
		ft_print_number(number, lines);
	}
	else
	{
		str = ft_convert_number(number);
		ft_print_number_str(str, lines);
		number->i_value %= 10;
		number->s_value++;
		number->digit_count--;
		ft_print_letter(number, lines);
		free(str);
	}
}

void	ft_set_third_digit(t_number *number, char **lines)
{
	char	tmp[3];

	ft_print_digit(number->s_value[0], lines);
	ft_str_n_copy(tmp, number->s_value + 1, 2);
	ft_print_number_str("100", lines);
	if (tmp[0] == '0')
	{
		tmp[0] = tmp[1];
		tmp[1] = '\0';
	}
	number->s_value = tmp;
	number->i_value = ft_atoi(tmp);
	number->digit_count = ft_get_digit_count(number->i_value);
	ft_print_letter(number, lines);
}

void	ft_set_others(t_number *number, char **lines)
{
	int			temp_digit;
	char		tmp[4];
	t_number	*obj;
	char		*letter;

	temp_digit = 0;
	if (number->digit_count % 3 == 0)
	{
		temp_digit = number->digit_count - 3;
		ft_str_n_copy(tmp, number->s_value, 3);
		number->s_value += 3;
	}
	else
	{
		temp_digit = number->digit_count - (number->digit_count % 3);
		ft_str_n_copy(tmp, number->s_value, number->digit_count % 3);
		number->s_value += number->digit_count % 3;
	}
	obj = ft_create_number(tmp);
	ft_print_letter(obj, lines);
	letter = ft_itoa(ft_pow(10, temp_digit));
	ft_print_number_str(letter, lines);
	free(letter);
	ft_sacmalik(number, lines);
}

void	ft_sacmalik(t_number *number, char **lines)
{
	number->i_value = ft_atoi(number->s_value);
	number->digit_count = ft_get_digit_count(number->i_value);
	ft_print_letter(number, lines);
}
