/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:53:43 by caguiari          #+#    #+#             */
/*   Updated: 2026/06/01 12:30:44 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free_all(char **tab, int j)
{
	while (j--)
		free(tab[j]);
	free(tab);
}

static char	*get_word(char const *s, char c, int *i)
{
	int	start;

	while (s[*i] == c)
		(*i)++;
	if (!s[*i])
		return (NULL);
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		tab[j] = get_word(s, c, &i);
		if (!tab[j])
		{
			if (s[i] == '\0')
				break ;
			return (ft_free_all(tab, j), NULL);
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
