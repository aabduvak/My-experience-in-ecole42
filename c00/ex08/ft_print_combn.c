/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 07:21:29 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/22 08:05:37 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_value(char *value, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		value[i] = i + 48;
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_increment(char *value, int n, char max)
{
	if (value[--n] >= max)
	{
		ft_increment(value, n, --max);
		value[n] = value[n - 1] + 1;
	}
	else
	{
		value[n]++;
	}
}

void	ft_print_value(char *value, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(value[i++]);
	}
}

void	ft_print_combn(int n)
{
	char	val[10];
	char	big_max;
	char	lit_max;

	big_max = '9';
	lit_max = 9 - n + 48;
	ft_init_value(val, n);
	ft_print_value(val, n);
	while (val[0] <= lit_max && n <= 10 && n >= 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
		ft_increment(val, n, big_max);
		ft_print_value(val, n);
	}
}
