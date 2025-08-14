# ############################################################################ #
#                                                                              #
#  File:        Makefile                                                       #
#                                                                              #
#  Author:      Racer911-1                                                     #
#  Created:     2025/07/23 22:22:12                                            #
#                                                                              #
#  Modified by:	Racer911-1                                                     #
#  Modified:	2025/08/03 15:04:02                                            #
#                                                                              #
# ############################################################################ #

NAME	:=	rcc

SRCDIR	:=	src
OBJDIR	:=	obj
LIBDIR	:=	libs

CC		:=	cc
CFLAGS	:=	-Wall -Werror -Wextra
SUBLIBS	:=	$(wildcard $(LIBDIR)/*)
HEADERS	:=	-I include $(foreach dir,$(SUBLIBS),-I $(dir)/include)

SRCS	:=	$(wildcard $(SRCDIR)/*.c)
OBJS	:=	$(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRCS:.c=.o))
LIBS	:=	$(foreach dir,$(SUBLIBS),$(dir)/$(notdir $(dir)).a)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

all: sublibs $(NAME)

sublibs:
	@for dir in $(SUBLIBS); do \
		$(MAKE) --no-print-directory -C $$dir; \
	done

$(NAME): $(LIBS) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

clean:
	@rm -rf $(OBJDIR)
	@for dir in $(SUBLIBS); do \
		$(MAKE) --no-print-directory -C $$dir clean; \
	done
	@echo "\e[32m"Cleaned"\e[0m"

fclean: clean
	@rm -f $(NAME)
	@for dir in $(SUBLIBS); do \
		$(MAKE) --no-print-directory -C $$dir fclean; \
	done

re: fclean all

.PHONY: all clean fclean re