# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 07:04:32 by aabduvak          #+#    #+#              #
#    Updated: 2021/11/06 07:04:41 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -name "*.o" -type f -maxdepth 1 -delete