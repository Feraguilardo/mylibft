# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: feaguila <feaguila@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 13:12:12 by feaguila          #+#    #+#              #
#    Updated: 2023/11/12 13:26:26 by feaguila         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #

NAME = libft.a

# **************************************************************************** #

GCC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -fr
AR = ar -rcs

# **************************************************************************** #

DIR_OBJ = tmp/

# **************************************************************************** #

INC = ./include/
INCLUDE = -I$(INC)

# **************************************************************************** #

DIR_ROOT = ./srcs/

D_CHECK := checks/
D_MEMOR := mem/
D_PRINT := print/
D_NUMBR := numbers/
D_STRGS := string/
D_LISTS := lists/

D_CHECK_SRC := $(addprefix $(DIR_ROOT),$(D_CHECK))
D_MEMOR_SRC := $(addprefix $(DIR_ROOT),$(D_MEMOR))
D_PRINT_SRC := $(addprefix $(DIR_ROOT),$(D_PRINT))
D_NUMBR_SRC := $(addprefix $(DIR_ROOT),$(D_NUMBR))
D_STRGS_SRC := $(addprefix $(DIR_ROOT),$(D_STRGS))
D_LISTS_SRC := $(addprefix $(DIR_ROOT),$(D_LISTS))

# **************************************************************************** #

FCHEKCS := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c

FMEMORY := ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		   ft_memmove.c ft_memset.c

FNUMBER := ft_atoi.c ft_itoa.c ft_utoa.c

FPRINTS := ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c

FPRINTS += ft_printf.c ft_checkprint.c ft_putchar.c ft_putstr.c \
		   ft_putnbr.c ft_putnbr_unsigned.c ft_putnbr_hexadecimal.c \
		   ft_putptr.c

FSTRING := ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		   ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		   ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

FLISTS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# **************************************************************************** #

SRCS := $(FCHEKCS) $(FMEMORY) $(FNUMBER) $(FPRINTS) $(FSTRING) $(FLISTS)

vpath %.c $(D_CHECK_SRC) $(D_MEMOR_SRC) $(D_PRINT_SRC) \
		  $(D_NUMBR_SRC) $(D_STRGS_SRC) $(D_LISTS_SRC)

# **************************************************************************** #

OBJS = $(addprefix $(DIR_OBJ), $(SRCS:.c=.o))

# **************************************************************************** #

#--DEPENDENCIES--#
#DEPS = $(SRC:.c=.d)

#--ACTIONS--#
all: $(DIR_OBJ) $(NAME)

#--CREATE FOLDER TMP--#
$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)

#--COMPILING LIBFT WITH ALL--#
#makelib:
#	$(MAKE) -C libft

$(DIR_OBJ)%.o : %.c Makefile
	@$(GCC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "➜ Compiling $<"

$(NAME) : $(OBJS)
#	@cp ./libft/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "FT_PRINTF Compiled"

# @$(MAKE) -C libft clean VA A LA CARPETA LIBFT Y EJECUTA CLEAN
clean:
	@$(RM) $(DIR_OBJ)
#	@$(MAKE) -C libft clean
	@echo "➜ Remove Objects"

fclean: clean
	@$(RM) $(NAME)
#	@$(MAKE) -C libft fclean
	@echo "➜ Remove libftprintf.a"

re: fclean all

.PHONY: all clean fclean re

#-include $(DEPS)
