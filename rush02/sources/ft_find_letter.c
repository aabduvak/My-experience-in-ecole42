/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:15:55 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:15:55 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_skip.h"
#include "ft_find_letter.h"
#include "ft_struct.h"

int		g_line_index;
int		g_clm_index;
int		g_ret_index;
int		g_number_start;
char	*g_ret;

void	ft_set(int *li, int *clm, int *ret_i, int *num_s)
{
	*li = 0;
	*clm = 0;
	*ret_i = 0;
	*num_s = 0;
}

void	ft_set_loop(char **lines, char *number)
{
	while (number[g_number_start] == lines[g_line_index][g_clm_index])
	{
		g_number_start++;
		g_clm_index++;
	}
}

void	ft_pass(char **lines)
{
	g_ret = (char *)malloc(sizeof(char) * 100);
	g_clm_index = ft_skip(lines[g_line_index], g_clm_index);
	g_clm_index++;
	g_clm_index = ft_skip(lines[g_line_index], g_clm_index);
	while (lines[g_line_index][g_clm_index])
	{
		g_ret[g_ret_index++] = lines[g_line_index][g_clm_index];
		g_clm_index++;
	}
}

char	*ft_find_letter(char **lines, char *number)
{
	ft_set(&g_line_index, &g_clm_index, &g_ret_index, &g_number_start);
	while (lines[g_line_index] != NULL)
	{
		if (number[g_number_start] == lines[g_line_index][g_clm_index])
		{
			ft_set_loop(lines, number);
			if (!(number[g_number_start]))
			{
				ft_pass(lines);
				g_ret[g_ret_index] = '\0';
				return (g_ret);
			}
			else
			{
				g_number_start = 0;
				g_clm_index = 0;
			}
		}
		g_line_index++;
	}
	return (NULL);
}
