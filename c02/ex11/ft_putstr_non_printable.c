/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:11:28 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/28 14:57:00 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_char_printable(char c)
{
	int	is_printable;

	is_printable = 0;
	if (c >= ' ' && c != 127)
	{
		is_printable = 1;
	}
	return (is_printable);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		valid;
	char	value;

	index = 0;
	valid = 1;
	while (valid)
	{	
		value = str[index];
		if (value == '\0')
		{
			break ;
		}
		if (ft_is_char_printable(value))
			ft_putchar(value);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[value / 16]);
			ft_putchar("0123456789abcdef"[value % 16]);
		}
		index++;
	}
}
