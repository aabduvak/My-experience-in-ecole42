/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:29:02 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:29:02 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_reverse.h"
#include "ft_itoa.h"

char	*ft_itoa(unsigned int value)
{
	char	*ret;
	int		i;
	int		rem;

	i = 0;
	ret = (char *)malloc(sizeof(char) * 20);
	while (value != 0)
	{
		rem = value % 10;
		ret[i++] = rem + '0';
		value /= 10;
	}
	ret[i] = '\0';
	ft_reverse(ret, i);
	return (ret);
}
