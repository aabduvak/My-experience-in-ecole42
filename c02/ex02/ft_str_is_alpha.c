/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:06:45 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 21:45:38 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
