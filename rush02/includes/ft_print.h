/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:22:22 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:22:22 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include "ft_struct.h"
# include <stdlib.h>

void	ft_print_number(t_number *number, char **lines);
void	ft_print_number_str(char *str, char **lines);
void	ft_print_digit(char chr, char **lines);
void	ft_str_write(char *str);

#endif