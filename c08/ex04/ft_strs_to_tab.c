/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:51:45 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/05 21:17:58 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	dest = malloc(ft_str_length(src) * sizeof(char) + 1);
	index = 0;
	if (dest == NULL)
		return (0);
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*arr;

	index = 0;
	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	while (index < ac)
	{
		arr[index].size = ft_str_length(av[index]);
		arr[index].str = av[index];
		arr[index].copy = ft_strdup(av[index]);
		index++;
	}
	arr[index] = (struct s_stock_str){0, 0, 0};
	return (arr);
}
