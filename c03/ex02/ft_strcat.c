/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:00:56 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 00:55:55 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index_d;
	int	index_s;

	index_d = 0;
	index_s = 0;
	while (dest[index_d] != '\0')
	{
		index_d++;
	}
	while (src[index_s] != '\0')
	{
		dest[index_d] = src[index_s];
		index_s++;
		index_d++;
	}
	dest[index_d] = '\0';
	return (dest);
}
