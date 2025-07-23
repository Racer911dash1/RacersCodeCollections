# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 18:25:52 by dbakker           #+#    #+#              #
#    Updated: 2025/07/23 22:40:03 by dbakker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rcc_math.a

SRCDIR	:= src
OBJDIR	:= obj
SRCEXT	:= c
OBJEXT	:= o
HEADERS	:= -I include

CC		:= cc
CFLAGS	:= -Wall -Werror -Wextra

SRCS	:= $(wildcard $(SRCDIR)/*.c)

SRCPATH	:= $(addprefix $(SRCDIR)/,$(SRCS))
OBJS	:= $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRCS:.$(SRCEXT)=.$(OBJEXT)))

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\e[32m"$(NAME) Compiled"\e[0m"

clean:
	@$(RM) -rf $(OBJDIR)

fclean: clean
	@$(RM) -f $(NAME)
	@echo "\e[32m"$(NAME) Cleaned"\e[0m"

re: fclean all

.PHONY: all directories clean fclean re