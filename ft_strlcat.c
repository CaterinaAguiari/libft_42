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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len] != 0 && dst_len < size) //calcola la lunghezza di dst senza superare size
		dst_len++;
	i = 0;
	if (size <= dst_len) //se "dst" e' gia' lungo almeno "size"
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + i + 1) < size) /*ora scorri src fino al \0 e finche' ci sono caratteri da copiare. Lascia sempre spazio per il \0. Mai superare size*/
	{
		dst[dst_len + i] = src[i]; //qui copi src dentro dst
		i++;
	}
	dst[dst_len + i] = '\0'; //qui metti il \0 alla fine, dopo aver copiato tutto
	return (dst_len + src_len);
}
