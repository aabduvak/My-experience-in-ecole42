/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 04:08:00 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/13 18:37:48 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_str.h"
#include "ft_atoi.h"
#include "ft_convert_number.h"
#include "ft_struct.h"
#include "ft_skip.h"
#include "ft_read_file.h"
#include "ft_get_digit_count.h"
#include "ft_find_letter.h"
#include "ft_reverse.h"
#include "ft_itoa.h"
#include "ft_create_number.h"
#include "ft_str_copy.h"
#include "ft_print_letter.h"
#include "ft_pow.h"
#include "ft_print.h"

int	main(int argc, char **argv)
{
	char		**lines;
	char		*path;
	char		*num;
	t_number	*number;

	if (argc >= 2)
		num = argv[1];
	else
		return (1);
	if (argc == 3)
		path = argv[2];
	else
		path = "numbers.dict";
	lines = ft_read_file(path);
	if (lines == NULL)
		ft_str_write("Dict Error");
	number = (t_number *)malloc(sizeof(t_number));
	number->i_value = ft_atoi(num);
	if (number->i_value == 0)
		ft_str_write("Error");
	number->s_value = ft_strdup(num);
	number->digit_count = ft_get_digit_count(number->i_value);
	ft_print_letter(number, lines);
	return (0);
}
