/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:03:50 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:03:50 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_read_file.h"
#include <stdio.h>

int	ft_read_char(int file, char *out)
{
	char	chr;
	int		ret;

	ret = read(file, &chr, 1);
	if (ret != 0)
		*out = chr;
	return (ret);
}

void	ft_can_read(int file, int arr_index, char *line, char **lines)
{
	int		index;
	char	chr;

	if (file != -1)
	{
		index = 0;
		while (ft_read_char(file, &chr) != 0)
		{
			line = (char *)malloc(sizeof(char) * 1000);
			while (chr != '\n')
			{
				line[index++] = chr;
				if (ft_read_char(file, &chr) == 0)
					break ;
			}
			line[index] = '\0';
			index = 0;
			lines[arr_index++] = line;
		}
		close(file);
	}
}

char	**ft_read_file(char *path)
{
	int		file;
	char	**lines;
	char	*line;
	int		arr_index;

	line = NULL;
	file = open(path, O_RDONLY);
	arr_index = 0;
	lines = (char **)malloc(sizeof(char *) * 1000);
	ft_can_read(file, arr_index, line, lines);
	return (lines);
}
