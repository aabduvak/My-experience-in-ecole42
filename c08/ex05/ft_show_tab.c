/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:54:53 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/05 22:05:54 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	ft_put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_put_number(int number)
{
	char	*num;

	num = "0123456789";
	if (number > 9)
		ft_put_number(number / 10);
	write(1, &num[number % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_put_string(par[index].str);
		ft_put_string("\n");
		ft_put_number(par[index].size);
		ft_put_string("\n");
		ft_put_string(par[index].copy);
		ft_put_string("\n");
		index++;
	}
}
