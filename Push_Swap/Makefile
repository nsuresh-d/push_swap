# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 22:26:03 by nsuresh-          #+#    #+#              #
#    Updated: 2025/10/28 22:26:03 by nsuresh-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME		= push_swap

# Directories
SRC_DIR		= .
OBJ_DIR		= obj
LIBFT_DIR	= ../libft
PRINTF_DIR	= ../ft_printf_1
INC			= .

# Compiler
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I $(INC)
RM			= rm -f

# Source files
SRCS		=	push_a_to_b.c \
				push.c \
				swap.c \
				rotate.c \
				rev_rotate.c \
				sort_three.c \
				sort_stacks.c \
				stack_sorted.c \
				stack_init.c \
				push_b_to_a.c \
				push_swap.c \
				error.c \
				split.c

OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Libraries
LIBFT		= $(LIBFT_DIR)/libft.a
PRINTF		= $(PRINTF_DIR)/libftprintf.a

# Rules
all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	$(RM) -r $(OBJ_DIR)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re