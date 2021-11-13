/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:16:31 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 02:16:31 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *str)
{
	char	*ret;
	int		index;

	index = 0;
	ret = (char *)malloc((sizeof(char) * ft_strlen(str)) + 1);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			ret[index++] = *(str);
		str++;
	}
	ret[index] = '\0';
	return (ret);
}

void	ft_strcat(char *str1, char *str2, char delimitter)
{
	while (*str1)
	{
		str1++;
	}
	if (delimitter)
	{
		*str1 = delimitter;
		str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}
