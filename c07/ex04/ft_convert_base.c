/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:16:25 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/09 04:53:25 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

#define NO_MATCH -1

int		ft_str_length(char *str);
int		compute_number_length(unsigned int number, int radix, bool negative);
bool	is_space(char c);
bool	is_base_valid(char *str);

int	resolve_base(char *base, char match)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (base[index] == match)
			return (index);
		index++;
	}
	return (NO_MATCH);
}

char	*ft_buffer_base(char *base, unsigned int number, bool negative)
{
	int		index;
	int		radix;
	int		length;
	char	*string;

	radix = ft_str_length(base);
	length = compute_number_length(number, radix, negative);
	string = (char *)malloc((length + 1) * sizeof(char));
	if (!string)
		return (0);
	if (negative)
		string[0] = '-';
	if (negative)
		index = 1;
	else
		index = 0;
	while (index < length)
	{
		string[length - (!negative) - index++] = base[number % radix];
		number /= radix;
	}
	string[length] = '\0';
	return (string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				radix;
	int				minus;
	int				resolved;
	unsigned int	result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	radix = ft_str_length(base_from);
	minus = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '-')
		minus *= -1;
	resolved = resolve_base(base_from, *nbr);
	while ((resolved) != NO_MATCH)
	{
		result *= radix;
		result += resolved;
		nbr++;
	}
	if (resolved == 0)
		minus = 1;
	if (minus > 0)
		return (ft_buffer_base(base_to, result, false));
	return (ft_buffer_base(base_to, result, true));
}
