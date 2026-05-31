/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:20:12 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:22:56 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_dst(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen && s[i] != '\0')
		i++;
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen_dst(dst, size);
	if (dst_len == size) //regola del man per cui strlcat returna src_len + dst_len, ma se la len di dst e' = size, returna la lunghezza di quello che dovrebbe venire fuori, meno il \0
		return (dst_len + src_len);
	i = dst_len;
	while (src[i] != '\0' && i < (size - 1)) /*ora scorri src fino al \0 e finche' ci sono caratteri da copiare. Lascia spazio per \0. Ad ogni ciclo incrementa "i"
	{
		dst[i] = src[j]; //qui copi src dentro dst
		i++;
		j++;
	}
	dst[i] = '\0'; //qui metti il \0 alla fine, dopo aver copiato tutto
	return (dst_len + src_len);
}
