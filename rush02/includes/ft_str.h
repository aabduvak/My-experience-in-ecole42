/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:18:15 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 02:18:15 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

# include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *str);
void	ft_strcat(char *str1, char *str2, char delimitter);

#endif