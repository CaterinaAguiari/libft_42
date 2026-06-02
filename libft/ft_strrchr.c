/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:24:26 by caguiari          #+#    #+#             */
/*   Updated: 2026/06/01 12:32:53 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	target;

	s_len = ft_strlen(s);
	target = (char)c;
	if (target == '\0')
	{
		i = s_len;
		return ((char *)&s[i]);
	}
	if (s_len == 0)
		return (NULL);
	i = s_len - 1;
	while (1)
	{
		if (s[i] == target)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
