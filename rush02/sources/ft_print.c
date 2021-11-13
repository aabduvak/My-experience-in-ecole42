/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:20:57 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:20:57 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_struct.h"
#include "ft_find_letter.h"

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_str_write(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_put_char(str[index]);
		index++;
	}
}

void	ft_print_number(t_number *number, char **lines)
{
	char	*str;

	str = ft_find_letter(lines, number->s_value);
	if (str == NULL)
	{
		ft_str_write("Dict Error\n");
		return ;
	}
	ft_put_char(' ');
	ft_str_write(str);
	ft_put_char(' ');
	free(str);
}

void	ft_print_number_str(char *str, char **lines)
{
	char	*_str;

	_str = ft_find_letter(lines, str);
	if (_str == NULL)
	{
		ft_str_write("Dict Error\n");
		return ;
	}
	ft_put_char(' ');
	ft_str_write(_str);
	ft_put_char(' ');
	free(_str);
}

void	ft_print_digit(char chr, char **lines)
{
	char	digit[2];
	char	*_str;

	digit[0] = chr;
	digit[1] = '\0';
	_str = ft_find_letter(lines, digit);
	if (_str == NULL)
	{
		ft_str_write("Dict Error\n");
		return ;
	}
	ft_put_char(' ');
	ft_str_write(_str);
	ft_put_char(' ');
	free(_str);
}
