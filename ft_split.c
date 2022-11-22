/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <lclerc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:48:37 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/22 17:32:31 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_amount_of_words(char const *s, char c)
{
	int	amount_of_words;

	amount_of_words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break ;
		amount_of_words++;
		while (*s && *s != c)
			s++;
	}
	return (amount_of_words);
}

static char	**clean_array_of_words(char **array_of_words)
{
	int	i;

	i = 0;
	while (array_of_words[i])
		free(array_of_words[i++]);
	free(array_of_words);
	return (NULL);
}

static void	make_matrix(char const *s, char c, char	**array_of_words)
{
	char const	*tmp;
	int			i;

	i = 0;
	tmp = s;
	while (*tmp)
	{
		while (*s == c)
			s++;
		tmp = s;
		while (*tmp && *tmp != c)
			tmp++;
		if (*tmp == c || tmp > s)
		{
			*array_of_words = ft_substr(s, 0, tmp - s);
			if (!array_of_words || !*array_of_words)
			{
				clean_array_of_words(array_of_words);
				return ;
			}
			s = tmp;
			array_of_words++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array_of_words;
	int		amount_of_words;

	if (!s)
		return (NULL);
	amount_of_words = get_amount_of_words(s, c);
	array_of_words = (char **)malloc(sizeof(char *) * (amount_of_words + 1));
	if (array_of_words == NULL)
		return (NULL);
	make_matrix(s, c, array_of_words);
	array_of_words[amount_of_words] = NULL;
	return (array_of_words);
}
