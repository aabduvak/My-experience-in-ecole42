/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:24:50 by aabduvak          #+#    #+#             */
/*   Updated: 2021/10/29 01:25:52 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_d;
	unsigned int	index_s;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	index_d = ft_strlen(dest);
	index_s = 0;
	while (src[index_s] != '\0' && index_d + 1 < size)
	{
		dest[index_d] = src[index_s];
		index_d++;
		index_s++;
	}
	dest[index_d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[index_s]));
}

int	main(void)
{
	char			dest[20] = "123";
	char			src[] = "4567890";
	unsigned int	size = 6;
	unsigned int	result;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);
	return (0);
}
