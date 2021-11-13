/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:22:10 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 21:45:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if (!((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z')))
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
	int	is_valid;
	char str[] = "AScasdv";
	char str2[] = "Hell0"; 

	printf("The string is: %d\n", ft_str_is_alpha(str));
	printf("The string is: %d\n", ft_str_is_alpha(str2));
	return (0);
}
