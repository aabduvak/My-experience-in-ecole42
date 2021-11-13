# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 02:05:16 by aabduvak          #+#    #+#              #
#    Updated: 2021/11/11 02:05:16 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./sources/ft_struct.c ./sources/ft_atoi.c ./sources/ft_str.c ./sources/ft_find_letter.c ./sources/ft_get_digit_count.c ./sources/ft_create_number.c ./sources/ft_itoa.c ./sources/ft_pow.c ./sources/ft_convert_number.c ./sources/ft_reverse.c ./sources/ft_str_copy.c ./sources/ft_skip.c ./sources/ft_print.c ./sources/ft_read_file.c ./sources/ft_set_num.c ./sources/ft_print_letter.c ./sources/main.c  
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= rush-02
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette */*.[ch]

re : fclean all

.PHONY: all clean fclean re .c.o