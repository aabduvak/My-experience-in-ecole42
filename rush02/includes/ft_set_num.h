/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_num.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:21:43 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 20:30:03 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_NUM_H
# define FT_SET_NUM_H

# include "ft_struct.h"

void	ft_set_second_digit(t_number *number, char **lines);
void	ft_set_third_digit(t_number *number, char **lines);
void	ft_set_others(t_number *number, char **lines);
void	ft_sacmalik(t_number *number, char **lines);

#endif