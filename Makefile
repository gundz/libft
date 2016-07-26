#CONFIG
	SRCS =			\
					ft_strlen.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_strstr.c \
					ft_strnstr.c \
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
					ft_strijoin.c \
					ft_strsub.c \
					ft_strsplit.c \
					ft_itoa.c \
					ft_strrev.c \
					ft_strchr.c \
					\
					ft_atoi.c \
					\
					ft_ctablen.c \
					ft_freectab.c \

	SRCS +=			\
					lst_create_elem.c \
					lst_push_back.c \
					lst_csize.c \
					lst_count.c \
					lst_b_sort.c \
					lst_free.c \
					lst_to_char.c \

	SRCS +=			\
					thread.c \
					t_tab_thread.c \

	SRCS +=			\
					get_next_line.c \

	SRCS +=			\
					ft_basename.c \

	NAME =			libft.a

	CC =			gcc

	EXTENTION =		c

	CFLAGS = 		-Wall -Werror -Wextra

#ADVANCED CONFIG
	SRC_PATH =		./srcs/
	INC_PATH =		./includes/
	OBJ_PATH =		./obj/
	#LIB CONFIG
		#TYPE OF BINARY: LIB or PROGRAM
		TYPE = LIB
	#LIB that are make with the same makefile
		#LIB_NAMES = -lft
		#LIB_PATH =	./libft/
	#OTHER LIB
		LIB_SUPP = `sdl2-config --libs` -lSDL2_image
		LIB_SUPP_INC = `sdl2-config --cflags`
	#TEXT
		COMPILING_OBJECTS = "\033[4;7mCompiling Objects:\033[0m [$(NAME)]\n"
		COMPILING_BINARY = "\033[4;7mCompiling binary:\033[0m [$(NAME)]\n"
		COMPILING_DONE = "\n\033[4m\033[95md\033[93mo\033[32mn\033[96me\033[0m \033[91m!\033[0m\n\n"
		COMILING_PROGRESS = "\033[37;7m+\033[0m"
		COMPILING_CLEAN = "\033[4;7mCleaning:\033[0m [$(NAME)]\n\033[4m\033[95md\033[93mo\033[32mn\033[96me\033[0m \033[91m!\033[0m\n\n"
		COMPILING_FCLEAN = "\033[4;7mFcleaning:\033[0m [$(NAME)]\033[0m\n\033[4m\033[95md\033[93mo\033[32mn\033[96me\033[0m \033[91m!\033[0m\n\n"

#DO MAGIC
	OBJ = $(addprefix $(OBJ_PATH), $(SRCS:.$(EXTENTION)=.o))
	INC = $(addprefix -I, $(INC_PATH))
	#LIB
		LIB_INC = $(addprefix -I, $(addsuffix includes, $(LIB_PATH)))
		LIB = $(addprefix -L, $(LIB_PATH))
		INC += $(LIB_INC) $(LIB_SUPP_INC)
		LDFLAGS = $(LIB) $(LIB_NAMES) $(LIB_SUPP)
		EMPTY =

all: libs name $(OBJ) done $(NAME)

$(NAME): $(OBJ)
	@ printf $(COMPILING_BINARY)
	@ printf $(COMILING_PROGRESS)
ifeq ($(TYPE), LIB)
	@ ar -rc $(NAME) $(OBJ)
	@ ranlib $(NAME)
else
	@ $(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) -o $(NAME)
endif
	@ printf $(COMPILING_DONE)

$(OBJ_PATH)%.o: $(SRC_PATH)%.$(EXTENTION)
	@ printf $(COMILING_PROGRESS)
	@ mkdir -p $(OBJ_PATH) 2> /dev/null
	@ $(CC) $(CFLAGS) $(INC) -c $< -o $@

#COMPILING SUBLIBS
libs:
	@ $(foreach lib, $(LIB_PATH), make -sC $(lib) ;)

clean:
	@ rm -rf $(OBJ_PATH)
	@ printf $(COMPILING_CLEAN)
	@ $(foreach lib, $(LIB_PATH), make clean -sC $(lib) ;) #CLEANING SUBLIBS

fclean: clean
	@ rm -rf $(NAME)
	@ printf $(COMPILING_FCLEAN)
	@ $(foreach lib, $(LIB_PATH), make fclean -sC $(lib) ;) #FCLEANING SUBLIBS

re: fclean all

#TEXT
name :
	@ printf $(COMPILING_OBJECTS)

done :
	@ printf $(COMPILING_DONE)

.PHONY: all clean fclean re libs