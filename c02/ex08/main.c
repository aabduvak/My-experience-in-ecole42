/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:44:17 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/27 11:57:39 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		index;
	int		valid;
	char	value;

	index = 0;
	valid = 1;
	while (valid)
	{	
		value = str[index];
		printf("%c", value);
		if (value == '\0')
		{
			valid = 0;
			break ;
		}
		if (value >= 'A' && value <= 'Z')
		{
			str[index] = value + 32;
		}
		printf("%c\n", str[index]);
		index++;
	}
	return (str);
}

int	main(void)
{
	char 	str[] = "AbdUlazIz$";

	printf("Before: %s\n", str);
	ft_strlowcase(str);
	printf("After: %s\n", str);
}
