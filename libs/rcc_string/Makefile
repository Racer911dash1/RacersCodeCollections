# ############################################################################ #
#                                                                              #
#  File:        Makefile                                                       #
#                                                                              #
#  Author:      Racer911-1                                                     #
#  Created:     2025/07/23 17:18:00                                            #
#                                                                              #
#  Modified by:	Racer911-1                                                     #
#  Modified:	2025/08/03 15:03:55                                            #
#                                                                              #
# ############################################################################ #

NAME = rcc_string.a

SRCDIR	:= src
OBJDIR	:= obj
HEADERS	:= -I include

CC		:= cc
CFLAGS	:= -Wall -Werror -Wextra

SRCS	:= $(wildcard $(SRCDIR)/*.c)

SRCPATH	:= $(addprefix $(SRCDIR)/,$(SRCS))
OBJS	:= $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRCS:.c=.o))

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