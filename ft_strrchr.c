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
	if (s_len == 0)//controllo se la stringa e' vuota
		return (NULL);
	i = s_len - 1;
	while (1)//loop infinito controllato
	{
		if (s[i] == target)
			return ((char *)&s[i]);
		if (i == 0)
			break ;//abbiamo controllato s[0] prima, e qui ci fermiamo prima di underflow
		i--;
	}
	return (NULL);//se non c'e' ricorrenza di c in s
}
