/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:34:40 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 22:56:19 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if (!(value >= 'A' && value <= 'Z'))
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
	char	str[] = "abdulaziz";
	char	str2[] = "ABDULAZIZ";

	printf("The string is: %d\n", ft_str_is_uppercase(str));
	printf("The string is: %d\n", ft_str_is_uppercase(str2));
	return (0);
}
