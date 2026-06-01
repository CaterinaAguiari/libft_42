/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 23:07:08 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 23:36:44 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	size_t	trimmed_len;
	int	set_nbr;

	if (!s1 || !set)
		return (NULL);
	set_nbr = ft_atoi(set);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(&s1[start], set_nbr))
		start++;
	while (end > start && ft_strchr(&s1[end - 1], set_nbr))
		end--;
	trimmed_len = (end - start);
	return (ft_substr(s1, start, trimmed_len));
}
