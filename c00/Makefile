# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 00:59:54 by aabduvak          #+#    #+#              #
#    Updated: 2021/11/13 17:44:56 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Use Makefile to compite and to check your C files

# All you have to do is typing "make" to command line
# "make all" for deep control

deep_compiling = "\n===================== DEEP COMPILLING FILES =====================\n"
deep_norminette_check = "\n===================== CHEKING NORMINETTE HEADERS =====================\n"

norminette = "\n===================== CHEKING NORMINETTE =====================\n"
result = "\n===================== SHOWING OUTPUT =====================\n"
compiling = "\n===================== COMPILLING FILES =====================\n"
compile_success = "\n===================== COMPILED SUCCESSFULLY =====================\n"
clean = "\n===================== CLEANING OUTPUT FILES =====================\n"
wait = "please wait few seconds..."

clean: output 
	@echo $(clean)
	@for n in ./ex*; do rm -r $$n/*.o*;  done
	@echo "cleaned all output files\n"

output: compile
	@echo $(result)
	@for n in ./ex*; do  $$n/*.o*;  done

compile: norminette
	@echo $(compiling)
	@echo $(wait)
	@for n in ./ex*; do gcc $$n/*.c -o $$n/a.out ;  done
	@echo $(compile_success)

norminette: 
	@echo $(norminette)
	@norminette 

# For deep control

all: clean_deep
clean_deep: output_deep 
	@echo $(clean)
	@for n in ./ex*; do rm -r $$n/*.o*;  done
	@echo "cleaned all output files\n"

output_deep: deep_compile
	@echo $(result)
	@for n in ./ex*; do  $$n/*.o*;  done

deep_compile: deep_norminette
	@echo $(deep_compiling)
	@for n in ./ex*; do gcc -Wall -Wextra -Werror $$n/*.c -o $$n/a.out ;  done
	@echo $(compile_success)

deep_norminette:
	@echo $(deep_norminette_check)
	@norminette -R CheckForbiddenSourceHeader