/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 02:54:35 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/31 04:15:04 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_recursive(int number, char *base, int radix)
{
	if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr_base_recursive(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		ft_putnbr_base_recursive(number / radix, base, radix);
	ft_putchar(base[number % radix]);
}

int	ft_is_same_val(char *base, int i)
{
	int	n;
	int	j;

	n = 0;
	while (base[n] != '\0')
	{
		j = i;
		while (n != i && i >= 0 )
		{
			if (base[n] == base[i])
			{
				return (0);
			}
			i--;
		}
		i = j;
		n++;
	}
	return (1);
}

int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (ft_is_same_val(base, i) == 0 || i <= 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[size] != '\0')
			size++;
		ft_putnbr_base_recursive(nbr, base, size);
	}
}

int	main(void)
{
	ft_putnbr_base(64, "01");
	return (0);
}
