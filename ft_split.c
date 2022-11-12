/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:48:37 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/12 14:52:20 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int get_amount_of_words(char const *s, char c)
{
	int amount_of_words;

	amount_of_words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break;
		amount_of_words++;
		while (*s && *s != c)
			s++;
	}
	return (amount_of_words);
}


static void clean_array_of_words(char *array_of_words) 
{
			while(array_of_words)
			{
				free(array_of_words--);
			}
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
		while (s[bookmark + i] && s[bookmark + i] != c)
			i++;
		*array_of_words = (char *)malloc(sizeof(char) * (i + 1));
		if (*array_of_words == NULL)
			clean_array_of_words(*array_of_words);
		else if (*array_of_words != NULL)
		{
			ft_strlcpy(*array_of_words, s + bookmark, i + 1);
			(*array_of_words)[i] = '\0';
			bookmark += i;
			array_of_words++;
        	i = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array_of_words;
	int	amount_of_words;
	
	if (!s)
		return (NULL);
	amount_of_words = get_amount_of_words(s, c);
	array_of_words = (char **)malloc(sizeof(char *) * (amount_of_words + 1));
	if (array_of_words == NULL)
	{
		return (NULL);
	}
	make_matrix(s, c, array_of_words);
    array_of_words[amount_of_words] = NULL;
	return (array_of_words);
}
