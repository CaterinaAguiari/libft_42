/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:04:55 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:06:53 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	size_t			i;

	i = 0;
	target = (unsigned char)c;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == target) /* anche "s" va chastato in unsigned char. Per architettura interna, il processore vuole lavorare con int. Quindi, per fare il paragone tra "s" e "target", C prende entrambi i valori e li promuove ad int. "target" e' a posto, ma "s[i]" e' char normale */
			return ((char *)&s[i]);
		i++;
	}
	if (target == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
