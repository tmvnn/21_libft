# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbellona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 16:32:39 by lbellona          #+#    #+#              #
#    Updated: 2018/11/24 16:34:06 by lbellona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/*.c
NAME = libft.a
WWW = -Wall -Wextra -Werror
INCLUDES = includes/
OFILES = *.o

all: $(NAME)

$(NAME):
	gcc $(WWW) -c $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OFILES) 
	ranlib $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
