/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:09:59 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:17:13 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target;
	int				i;

	i = ft_strlen(s);
	target = (unsigned char)c;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == target)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
