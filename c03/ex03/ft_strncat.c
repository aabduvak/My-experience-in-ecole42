/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:33:54 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 01:11:21 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	index_d;
	int unsigned	index_s;

	index_d = 0;
	index_s = 0;
	while (dest[index_d] != '\0')
	{
		index_d++;
	}
	while (src[index_s] != '\0' && index_s < nb)
	{
		dest[index_d] = src[index_s];
		index_s++;
		index_d++;
	}
	dest[index_d] = '\0';
	return (dest);
}
