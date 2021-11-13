/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:51:42 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 21:54:24 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
		if (!(value >= '0' && value <= '9'))
		{
			valid = 0;
			break ;
		}
		index++;
	}
	return (valid);
}

int	main(void)
{
	char str[] = "123456789";
	char str2[] = "12345G";

	printf("The string is: %d\n", ft_str_is_numeric(str));
	printf("The string is: %d\n", ft_str_is_numeric(str2));
	return (0);
}