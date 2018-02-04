# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itoth <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/14 16:19:25 by itoth             #+#    #+#              #
#    Updated: 2018/01/14 16:55:29 by itoth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: Colleen Grace Sully

Colleen:
	@clang -Wall -Wextra -Werror Colleen.c -o Colleen
Grace:
	@clang -Wall -Wextra -Werror Grace.c -o Grace
Sully:
	@clang -Wall -Wextra -Werror Sully.c -o Sully
clean:
	@rm -rf Grace_kid.c Sully_*
fclean: clean
	@rm -rf Colleen Grace Sully
re: fclean all
