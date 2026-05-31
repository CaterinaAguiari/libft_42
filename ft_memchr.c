/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:02:20 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:03:19 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	target;
	size_t			i;

	str = (unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == target)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
