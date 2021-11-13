/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:56:34 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/28 14:50:29 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[20];

	printf("base   : %s\n", src);
	strncpy(dest, src, 15);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 15);
	printf("ft_cpy : %s\n", dest);
}
