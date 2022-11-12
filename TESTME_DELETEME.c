/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TESTME_DELETEME.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <lclerc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:48:37 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/11 19:20:46 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int get_amount_of_words(char const *s, char c)
{
	int amount_of_words;

	amount_of_words = 0;
	while (*s)
	{
		while (*s && *s++ == c) 
			;
		if (*s == '\0')
			break;
		amount_of_words++;
		while (*s && *s++ != c)
			;
	}
	return (amount_of_words);
}

static void  make_matrix(char const *s, char c, char  **array_of_words)
{
	int bookmark;
	int	i;

	bookmark = 0;
	i = 0;
	while (s[bookmark + i])
	{
		while (s[bookmark] && s[bookmark] == c)
			bookmark++;
        printf("bookmark after skipping deliminators: %d\n", bookmark);
        printf("stopped at '%c'  character\n", s[bookmark]);
		while (s[bookmark + i] && s[bookmark + i] != c)
			i++;
        printf("i after skipping a word: %d\n", i);
        printf("stopped at '%c'  character\n", s[bookmark + i]);
		*array_of_words = (char *)malloc(sizeof(char) * (i + 1));
        printf("allocated memory for %d chars\n", i + 1);
		ft_strlcpy(*array_of_words, s + bookmark, i + 1);
		(*array_of_words)[i] = '\0';
        printf("copied string: %s\n", *array_of_words);
		bookmark += i;
        printf("bookmark in the end of the loop: %d\n", bookmark);
		array_of_words++;
        i = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array_of_words;
	int	amount_of_words;
	
	amount_of_words = get_amount_of_words(s, c);

	array_of_words = (char **)malloc(sizeof(char *) * (amount_of_words + 1));
    printf("allocated memory for %d strings\n", amount_of_words + 1);
	if (array_of_words == NULL)
	{
		return (NULL);
	}
	make_matrix(s, c, array_of_words);
    array_of_words[amount_of_words] = NULL;
	return (array_of_words);
}

int main(void)
{
    char **s = ft_split("....1234....567.", '.');
    while (*s)
    {
        printf("%s\n", *s);
        s++;
    }
    return 0;
}