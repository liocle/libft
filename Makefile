# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lclerc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:40:47 by lclerc            #+#    #+#              #
#    Updated: 2022/10/31 17:26:28 by lclerc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= 		CC
NAME= 		libft.a
LFLAGS=		-Wall -Wextra -Werror
CFLAGS=		-L. -lft
INCDIRS=	-I .
CFILES=		ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memset.c
OBJECTS=	ft_isalpha.o \
			ft_isdigit.o \
			ft_isascii.o \
			ft_isalnum.o \
			ft_isprint.o \
			ft_strlen.o \
			ft_toupper.o \
			ft_tolower.o \
			ft_strchr.o \
			ft_strrchr.o \
			ft_strncmp.o \
			ft_memset.o
MAIN=		main.c

all: $(NAME)

# Running 'ar s' corresponds to running 'ranlib' on it.
# $@ stands for whatever is on the left side of the ":"
# $^ stands for whatever is on the right side of the ":" 
# regular expression where % is a wildcard, using @echo should run the command without printing the output

$(NAME): $(OBJECTS)
	@echo "\nCreating static library libft.a:"
	ar rcs $@ $^ 

%.o: %.c 
	$(CC) -c $^ $(LFLAGS) 

test:
	@echo "\nCompiling executable with static libft.a library:"
	$(CC) $(MAIN) $(CFLAGS) 

norminette:
	@norminette $(CFILES)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean test norminette
