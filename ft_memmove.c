/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:24:41 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:41:12 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		i = n;
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			*d++ = *s++;
		}
	}
	return (dest);
}
