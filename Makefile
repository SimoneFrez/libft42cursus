# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 02:04:26 by sgomes-d          #+#    #+#              #
#    Updated: 2022/06/11 02:05:11 by sgomes-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#
# Part 1
#
SRC =				\
	   ft_isascii.c	\
	   ft_isalpha.c	\
	   ft_isalnum.c	\
	   ft_isdigit.c	\
	   ft_isprint.c	\
	   ft_strlen.c	\
 	   ft_memset.c	\
	   ft_bzero.c	\
	   ft_memcpy.c	\
	   ft_memmove.c	\
	   ft_strlcat.c	\
	   ft_strlcpy.c	\
	   ft_toupper.c	\
	   ft_tolower.c	\
	   ft_strchr.c	\
	   ft_strrchr.c	\
	   ft_strncmp.c	\
	   ft_memchr.c	\
	   ft_memcmp.c	\
	   ft_strnstr.c	\
	   ft_atoi.c	\
	   ft_calloc.c	\
	   ft_strdup.c


#
# Part 2
#
SRC +=					\
	   ft_substr.c		\
	   ft_strjoin.c		\
	   ft_strtrim.c		\
	   ft_split.c		\
	   ft_itoa.c		\
	   ft_strmapi.c		\
	   ft_striteri.c	\
	   ft_putchar_fd.c	\
	   ft_putstr_fd.c	\
	   ft_putendl_fd.c	\
	   ft_putnbr_fd.c

#
# Part Bonus
#
SRC +=					\
	   ft_lstnew.c	\
	   ft_lstadd_front.c	\
	   ft_lstsize.c	\
	   ft_lstlast.c	\
	   ft_lstadd_back.c	\
	   ft_lstdelone.c	\
	   ft_lstclear.c	\
	   ft_lstiter.c	\
	   ft_lstmap.c

#
# Extra
#
SRC +=					\
		ft_minmax.c		\
		ft_rand.c

OBJ = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)

override CFLAGS += -MMD -Wall -Wextra -Werror

.PHONY:	all bonus clean fclean re norm

all: $(NAME)

sinclude $(DEPS)

$(NAME): $(OBJ)
	ar -rc $(NAME) $?
	ranlib $(NAME)

bonus:	all

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)

norm:
	norminette libft.h $(SRC)

re: fclean all
