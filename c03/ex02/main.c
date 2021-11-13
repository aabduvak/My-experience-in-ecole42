/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:19:11 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 01:03:25 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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


int	main(void)
{
	char str1[26] = "Hello ";
	char str2[] = "42ECOLE STUDENTS :)";
	char str3[26] = "Hello ";
	char str4[] = "42ECOLE STUDENTS :)";

	strcat(str1, str2);
	printf("%s\n", str1);
	ft_strcat(str3, str4);
	printf("%s\n", str3);
	return (0);
}
