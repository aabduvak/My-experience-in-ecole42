/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:18:52 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/26 20:40:22 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char 	src[] = "Hello World";
	char	dest[12];

	printf("base   : %s\n", src);
	printf("dest    : %s\n", dest);
	strcpy(dest, src);
	printf("strcpy    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}
