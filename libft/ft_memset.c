/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:09:05 by caguiari          #+#    #+#             */
/*   Updated: 2026/06/01 12:32:00 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	value;
	unsigned char	*p;
	size_t			i;

	value = (unsigned char)c;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}
