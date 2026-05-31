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
	const unsigned char	*s;
	unsigned char	*d;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s) //se dest e' piu' avanti in memoria rispetto a src
	{
		i = n;//cosi' non modifichi il vero "n"
		while (i > 0)
		{
			i--;//cosi' eviti il \0
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i > n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
