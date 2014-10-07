# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/11 02:34:50 by fgundlac          #+#    #+#              #
#    Updated: 2014/07/20 19:52:20 by fgundlac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
PATH_INC = includes
PATH_OBJ = obj
PATH_SRC = srcs

SRC =	\
		ft_strlen.c \
		ft_strcmp.c \
		\
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		\
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strdup.c \
		ft_strcat.c \
		ft_strjoin.c \

SRC +=	\
		lst_create_elem.c \
		lst_push_back.c \
		lst_count.c \
		lst_sort.c \

OBJ = $(patsubst %.c, $(PATH_OBJ)/%.o, $(SRC))

all : $(NAME)

$(NAME) : namemes $(OBJ)
	@ ar -rc $@ $(OBJ)
	@ ranlib $(NAME)
	@ echo " \033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"

$(PATH_OBJ)/%.o : $(addprefix $(PATH_SRC)/, %.c)
	@ echo -n .
	@ mkdir -p $(PATH_OBJ)
	@ $(CC) $(CFLAGS) -o $@ -c $^ -I $(PATH_INC)

clean :
	@ rm -rf $(PATH_OBJ)
	@ echo "Cleaning $(NAME) \
		\033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"

fclean : clean
	@ rm -f $(NAME)
	@ echo "Fcleaning $(NAME) \
		\033[4m\033[95md\033[93mo\033[32mn\033[96me \033[91m!\033[0m"

re : fclean all

namemes :
	@ echo -n Compiling $(NAME)

.PHONY: clean fclean re
