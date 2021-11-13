/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:31:22 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 23:36:41 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
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
			valid = 0;
			break ;
		}
		if (value >= 'a' && value <= 'z')
		{
			str[index] = value - 32;
		}
		index++;
	}
	return (str);
}

int	main(void)
{
	char 	str[] = "Abdulaziz";
	char	*new_str;

	printf("Before: %s\n", str);
	new_str = ft_strupcase(str);
	printf("After: %s\n", new_str);
}
