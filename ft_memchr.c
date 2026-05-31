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
	unsigned char	*p;
	unsigned char	target;
	size_t			i;

	p = (unsigned char *)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == target)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
