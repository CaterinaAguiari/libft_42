/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:21:53 by caguiari          #+#    #+#             */
/*   Updated: 2026/06/01 15:47:51 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*b;
	char		*l;
	size_t		i;
	size_t		j;

	j = 0;
	b = (char *)big;
	l = (char *)little;
	if (l[0] == '\0')
		return (b);
	while (b[j] != '\0' && j < len)
	{
		i = 0;
		while ((i + j) < len && b[i + j] == l[i] && b[i + j])
			i++;
		if (l[i] == '\0')
			return (&b[j]);
		j++;
	}
	return (NULL);
}
