/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:22:04 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 00:27:40 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				diff;

	index = 0;
	diff = 0;
	while ((index < n) && !diff && \
		(s1[index] != '\0') && (s2[index] != '\0'))
	{
		diff = s1[index] - s2[index];
		index++;
	}
	if (index < n && !diff && (s1[index] == '\0' || s2[index] == '\0'))
		diff = s1[index] - s2[index];
	return (diff);
}
