# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/11 02:34:50 by fgundlac          #+#    #+#              #
#    Updated: 2014/07/20 19:19:31 by fgundlac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
PATH_INC = includes
PATH_OBJ = obj
PATH_SRC = src

SRC =	ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memset.c \
		ft_putchar.c ft_putstr.c ft_strcat.c ft_strcpy.c ft_strdup.c \
		ft_strlen.c ft_strncpy.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putendl_fd.c\
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memcmp.c \
		ft_strcmp.c ft_strncmp.c ft_atoi.c ft_putstr_fd.c ft_putnbr_fd.c \
		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_strequ.c ft_strnequ.c ft_strjoin.c ft_memmove.c ft_itoa.c \
		ft_strsplit.c ft_strtrim.c ft_strsub.c ft_striter.c ft_striteri.c \
		ft_strmap.c ft_strmapi.c ft_cacat.c ft_fgets.c ft_tablen.c \
		ft_char_to_str.c ft_strrev.c ft_intab.c ft_get_next_line.c \
		ft_str_uniq.c ft_puttab.c ft_add_tab.c ft_free_tab.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstfree.c \
		ft_lst_remove.c \
		ft_in_lst.c

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
