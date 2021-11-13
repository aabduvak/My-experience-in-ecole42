/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:33:50 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 22:34:31 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
