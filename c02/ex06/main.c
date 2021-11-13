/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:55:36 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 23:04:04 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (!(value >= 32 && value <= 127))
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
	char	str[] = " -=;";
	char	str2[] = "hello\7F";

	printf("The string is: %d\n", ft_str_is_printable(str));
	printf("The string is: %d\n", ft_str_is_printable(str2));
	return (0);
}
