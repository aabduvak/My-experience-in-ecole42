/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:56:59 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 21:59:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (!(value >= 'a' && value <= 'z'))
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
	char	str2[] = "Abdulaziz";

	printf("The string is: %d\n", ft_str_is_lowercase(str));
	printf("The string is: %d\n", ft_str_is_lowercase(str2));
	return (0);
}
