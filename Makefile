# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lclerc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:40:47 by lclerc            #+#    #+#              #
#    Updated: 2022/11/22 12:41:37 by lclerc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= 		CC
NAME= 		libft.a
LFLAGS=		-Wall -Wextra -Werror
HEADER=		-I libft.h
CFLAGS=		-L. -lft
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
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_itoa.c \
			ft_split.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putnbr_fd.c 
BFILES=		ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
OBJECTS=	$(CFILES:%.c=%.o)
BOBJECTS=	$(BFILES:%.c=%.o)	
MAIN=		main.c

all: $(NAME)

# Running 'ar s' corresponds to running 'ranlib' on it.
# $@ stands for whatever is on the left side of the ":"
# $^ stands for whatever is on the right side of the ":" 
# regular expression where % is a wildcard, using @echo should run the command without printing the output

$(NAME):
	@echo "\nCreating static library libft.a:\n"
	$(CC) -c $(CFILES) $(LFLAGS) $(HEADER) 
	ar rucs $(NAME) $(OBJECTS) 

bonus: 
	@echo "\nMake _bonuses only.\n"
	$(CC) -c $(BFILES) $(LFLAGS) $(HEADER)
	ar rucs $(NAME) $(BOBJECTS) 


test:
	@echo "\nCompiling executable with static libft.a library:"
	$(CC) $(MAIN) $(CFLAGS) -g -fsanitize=address 

full: $(NAME)
	@echo "\nCreating static library libft.a and compiling test enviroment.\n"
	$(CC) $(MAIN) $(CFLAGS) -g -fsanitize=address 
	@./a.out

grep:
	@ grep --color -irw . -e 'include\|stdio\|printf\|restrict' | grep -v "libft-unit-test\|main.c"
grepall:
	@ grep --color -irw . -e 'include\|stdio\|printf\|restrict' 

norminette:
	@norminette $(CFILES) libft.h Makefile

clean:
	/bin/rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean test norminette
