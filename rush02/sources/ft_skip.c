/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:09:28 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:09:28 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skip.h"

int	ft_skip(char *str, int last_index)
{
	while (str[last_index] && str[last_index] == ' ')
		last_index++;
	return (last_index);
}
