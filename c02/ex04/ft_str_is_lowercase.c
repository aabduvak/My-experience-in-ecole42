/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:55:49 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 21:56:46 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
