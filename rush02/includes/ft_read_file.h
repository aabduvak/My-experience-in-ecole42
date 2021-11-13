/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:07:08 by aabduvak          #+#    #+#             */
/*   Updated: 2021/11/11 03:07:08 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_FILE_H
# define FT_READ_FILE_H

# include <stdlib.h>

int		ft_read_char(int file, char *out);
char	**ft_read_file(char *path);

#endif