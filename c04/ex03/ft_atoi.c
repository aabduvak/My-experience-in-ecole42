/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:44:09 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/31 07:20:15 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	is_negative;
	int	num;
	int	i;

	i = 0;
	is_negative = 1;
	num = 0;
	while (*str <= ' ')
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			i++;
		str++;
	}
	if (i % 2 == 1)
		is_negative = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((int)*str - '0');
		str++;
	}
	return (num * is_negative);
}
