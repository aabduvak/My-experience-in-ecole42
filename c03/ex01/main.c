/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:34:34 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 00:26:48 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "hello";
	str2 = "hella";
	printf("c  : %d\n", strncmp(str1, str2, 4));
	printf("ft : %d\n", ft_strncmp(str1, str2, 4));
}
