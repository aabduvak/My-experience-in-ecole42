/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:43:53 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 01:11:54 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	char str1[50] = "Hello ";
	char str2[] = "42ECOLE STUDENTS :)";
	char str3[50] = "Hello ";
	char str4[] = "42ECOLE STUDENTS :)";

	strncat(str1, str2, 4);
	printf("%s\n", str1);
	ft_strncat(str3, str4, 4);
	printf("%s\n", str3);
	return (0);
}
