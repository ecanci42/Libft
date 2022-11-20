# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecanci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 16:39:42 by ecanci            #+#    #+#              #
#    Updated: 2022/10/19 18:28:14 by ecanci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
RM		= rm -f

NAME	= libft.a

SRCS	= ft_isascii.c ft_isalpha.c  \
		  ft_memchr.c ft_strdup.c \
		  ft_calloc.c ft_strchr.c ft_strrchr.c \
		  ft_tolower.c ft_toupper.c ft_memset.c \
		  ft_bzero.c ft_isprint.c ft_strlen.c ft_strncmp.c\
		  ft_memcmp.c ft_atoi.c ft_substr.c\
		  ft_isdigit.c ft_isalnum.c ft_memcpy.c ft_strlcpy.c \
		  ft_strlcat.c ft_memmove.c ft_strnstr.c ft_putstr_fd.c ft_putendl_fd.c\
		  ft_striteri.c ft_strtrim.c ft_strjoin.c ft_strmapi.c ft_split.c \
		  ft_itoa.c ft_putnbr_fd.c ft_putchar_fd.c\

OBJS	= $(SRCS:.c=.o)

BONUS	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		  ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		  ft_lstnew.c ft_lstsize.c \

BONUS_OBJS	= $(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJS) $(BONUS_OBJS)
			$(LIB1) $(NAME) $(OBJS) $(BONUS_OBJS)

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
