# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 18:23:49 by dbakker           #+#    #+#              #
#    Updated: 2025/07/23 21:05:56 by dbakker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	rcc

CC		:=	cc
CFLAGS	:=	-Wall -Werror -Wextra

LIBDIR	:=	libs
SUBLIBS	:=	$(wildcard $(LIBDIR)/*)
HEADERS	:=	$(foreach dir,$(SUBLIBS),-I $(dir)/include)
LIBS	:=	$(foreach dir,$(SUBLIBS),$(dir)/$(notdir $(dir)).a)

all:
	@for dir in $(SUBLIBS); do \
		$(MAKE) --no-print-directory -C $$dir; \
	done

clean:
	@for dir in $(SUBLIBS); do \
		$(MAKE) --no-print-directory -C $$dir clean; \
	done
	@echo "\e[32m"Cleaned"\e[0m"

fclean: clean
	@for dir in $(SUBLIBS); do \
		$(MAKE) --no-print-directory -C $$dir fclean; \
	done

re: fclean all

.PHONY: all mlxdir clean fclean re